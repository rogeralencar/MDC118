#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float seg;
	
	printf("Digite um número(segundos):");
	scanf("%f", &seg);
	
	float conv_horas = seg/3600;
	float conv_minutos = seg/60;
	
	printf("%.f segundos equivale a %f minutos\n", seg, conv_minutos);	
	printf("%.f segundos equivale a %f horas\n", seg, conv_horas);	
	
	return 0;	
}
