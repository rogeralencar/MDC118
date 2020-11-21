#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
} defData;

int main(){
    struct data defData;

    printf("Digite o dia: ");
    scanf("%d", &defData.dia);

    printf("Digite o número do mês: ");
    scanf("%d", &defData.mes);

    printf("Digite o ano: ");
    scanf("%d", &defData.ano);

    printf("Padrão brasileiro: ");
    printf("%d\\%d\\%d \n", defData.dia, defData.mes, defData.ano);

    printf("Padrão americano: ");
    printf("%d\\%d\\%d \n", defData.mes, defData.dia, defData.ano);

}