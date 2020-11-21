#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &num2);

    num1 > num2 ? printf("O primeiro número inserido é maior\n") : printf("O segundo número inserido é maior\n");

}