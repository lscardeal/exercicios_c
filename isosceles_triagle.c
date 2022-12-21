#include <stdio.h>

void printTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {

    int height;

    printf("Qual eh a altura do triangulo:\n");
    printf("> ");
    scanf("%d", &height);
    printTriangle(height);
}

