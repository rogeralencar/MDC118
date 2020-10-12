#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float gb;
	float gigas = pow(1024, 3);
	
	printf("Digite um número(Gb): ");
	scanf("%f", &gb);
	
	double conv_gigas = gb * gigas;
	printf("%4.f bytes\n", conv_gigas);
	
	return 0;
}
