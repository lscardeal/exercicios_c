#include <stdio.h>

#define MAX_SIZE 50

int getStringLength(char string[]) {
    int length = 0;
    while (1) {
        if (string[length] == '\0' || string[length] == '\n') {
            break;
        }
        length++;
    }

    return length;
}

void reverseString(char string[]) {
    int length = getStringLength(string);
    for (int i = (length-1); i >= 0; i--) {
        printf("%c", string[i]);
    }
}

int main() {

    char palavra[MAX_SIZE];

    printf("Escreva uma string[50]:\n");
    printf("> ");
    fgets(palavra, sizeof(palavra), stdin);
    reverseString(palavra);
}

