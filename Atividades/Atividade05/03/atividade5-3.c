#include <stdio.h>
#include <string.h>

int main (){
    char frase[80];
    char espaco;
    int tam, i;

    printf("Escreva uma frase: ");
    scanf("%79[^\n]%c", frase, &espaco);
   
    tam = strlen(frase);
    
    printf("Frase invertida: ");  
    for(i = tam - 1; i >= 0; --i) {
        printf("%c", frase[i]);
    }
    printf("\n");   
    
    return 0;
}