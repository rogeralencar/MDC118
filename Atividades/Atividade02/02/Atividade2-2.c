#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	float um = 0.99;
	float cinco = 0.95;
	float dez = 0.9;
	printf("Insira um valor maior ou igual a 100: ");
	scanf("%f", &valor);
	
	if(valor == 100){
		float desc = valor * um;
		printf("O valor com 1%% de desconto é: R$%.2f\n", desc);
	} else if(100 < valor && valor <= 500) {
		float desc = valor * cinco;
		printf("O valor com 5%% de desconto é: R$%.2f\n", desc);
	} else if(valor > 500) {
		float desc = valor * dez;
		printf("O valor com 10%% de desconto é: R$%.2f\n", desc);
	}	
}
