#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i = 1; i <= 33; i++){
		int result = 3 * i;
		printf("%d\n", result);
	}	

	return 0;
}
