#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	for(i = 1; num > 1; num -= 1 ){
		i *= num;	
	}
	printf("Fatorial do número escolhido é: %d\n", i);
}
