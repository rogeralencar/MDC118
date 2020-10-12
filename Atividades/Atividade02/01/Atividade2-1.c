#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número:");
	scanf("%i", &num);
	int resto = num % 2;
	
	if(resto == 0){
		printf("O número %d é par.\n", num);
	} else { 
		printf("O número é impar.\n");
	}
	
	return 0;
}
