#include <stdio.h>

#define MAX_SIZE 50

void printWord(char string[], int startPosition, int lastPosition) {
    for (int i = startPosition; i <= lastPosition; i++) {
        printf("%c", string[i]);
    }
    printf("\n");
}

void splitIntoWords(char string[]) {
    int startPosition = 0;
    int count = 0;
    while (1) {
        if (string[count] == '\0' || string[count] == '\n') {
            printWord(string, startPosition, count-1);
            break;
        } else if (string[count] == ' ') {
            printWord(string, startPosition, count-1);
            startPosition = count+1;
        }

        count++;
    }
}

int main() {

    char palavra[MAX_SIZE];

    printf("Escreva uma string[50]:\n");
    printf("> ");
    fgets(palavra, sizeof(palavra), stdin);
    splitIntoWords(palavra);
}

