#include <stdio.h>

int main() {
    int x = 20;
    int y = 30;
    int z;


    

    /* maior que */
    z = x > y;
    printf("x > y: %d\n", z); // 0 é falso e 1 verdadeiro

    /* menor que */
    z = x < y;
    printf("x < y: %d\n", z);

    /* igual a */
    z = x == y;
    printf("x = y: %d\n", z);

    /* maior ou igual */
    z =  x >= y;
    printf("x >= y: %d\n", z);

    /* menor ou igual */
    z =  x <= y;
    printf("x <= y: %d\n", z);

    /* diferente de */
    z = x != y;
    printf("x != y: %d\n", z); // ! operador logico negacao not
    

    // if (z == 1) {
    //     printf("Verdadeiro\n\n");
    // } else {
    //     printf("Falso\n\n");
    // };

    switch (z){
    case 1:
        printf("Verdadeiro\n\n");
        break;
    case 0:
        printf("Falso\n\n");
        break;
    
    default:
        break;
    }

    return 0;
}