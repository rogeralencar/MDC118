#include <stdio.h>
#include <ctype.h>

int main() {
    char cr;

    printf("Digite um caractere: ");
    scanf("%c", &cr);

    if(isalpha(cr)) {
        printf("É um caractere.\n");
    } else if (isdigit(cr)) {
        printf("É um número.\n");
    } else if (isprint(cr)){
        printf("É um caractere especial\n");
    }
}