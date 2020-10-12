#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const float pi = 3.1416;
	int num = 2;
	int perimetro;
	float total;
	
	printf("Insira um número inteiro: ");
	scanf("%d", &perimetro);
	
	total = num * pi * perimetro;
	
	printf("O valor do perímetro é: %.2f\n\n", total);
	return 0;
}
