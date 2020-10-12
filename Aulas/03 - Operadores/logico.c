#include <stdio.h>

int main() {
    int x = 20;
    int y = 30;
    
    // if (z == 1) {
    //     printf("Verdadeiro\n\n");
    // } else {
    //     printf("Falso\n\n");
    // };
    
    // Operador "e"
    printf("%d\n", x > y);
    printf("%d\n", x + 10 > y);
    printf("%d\n", x > y && x + 10 > y); // falso e qualquer coisa é falso

    // Operador "ou"
    printf("%d\n", x > y);
    printf("%d\n", x + 10 > y);
    printf("%d\n", x > y || x + 10 > y); // verdadeiro ou qualquer coisa é verdadeiro


    return 0;
}