#include <stdio.h>

int main() {

    int num[10];
    int max, min;

    printf("Digite os números: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];
    
    for(int i = 1; i < 10; i++) {
        if(num[i] > max){
            max = num[i];
        } else if(num[i] < min){
            min = num[i];
        }
    }

    printf("Menor valor: %d\nMaior valor: %d\n", min, max);

    return 0;
}