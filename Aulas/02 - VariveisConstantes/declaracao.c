#include <stdio.h>

/* tipo nome_variavel = valor inicial */
char ch = 'A'; // ou ch = 50; -128 a 127
unsigned char var = -19; // 0 a 255 => 0 a 127 -128 a -1 (255 - 19 + 1) = output: 237
int numero = 100;
int longo = 100000000L;
double duplo = 0.448484546546465454;
const int SEXO_MASCULINO = 1;

void main () {

    printf("%c\n", ch);
    printf("%d\n", numero);
    printf("%d\n", var);
    printf("%ld\n", longo);
    printf("%f\n", duplo);
    all operators in c
}