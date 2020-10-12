#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int nota;
	printf("Digite a nota: ");
	scanf("%d", &nota);
	
	switch (nota){
		case 1:
			printf("Nota ruim.\n");
		break;
		case 2:
			printf("Nota insuficiente.\n");
		break;
		case 3:
			printf("Nota suficiente.\n");
		break;
		case 4:
			printf("Nota boa.\n");
		break;	
		case 5:
			printf("Nota ótima.\n");
		break;
	}
	
}


