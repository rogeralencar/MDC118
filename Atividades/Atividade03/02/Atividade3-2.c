#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, soma;
	int a = 0;
	int b = 1;
	
	for(i = 0; i < 10; i++){
		soma = a + b;
		a = b;
		b = soma;	
	printf("%d\n", soma);
	}
	return 0;
}
