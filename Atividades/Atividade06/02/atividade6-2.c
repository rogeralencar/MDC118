#include <stdio.h>

struct contato {
    char nome[30];
    long int telefone;
} defContato;

int main() {
    struct contato defContato[10];
    
for(int i = 0;  i <= 9; i++){
    printf("Digite o nome: ");
    scanf("%s", defContato[i].nome);
    printf("Digite o telefone: ");
    scanf("%li", &defContato[i].telefone);
        if(i == 9) {
            printf("# --- Lista de Contatos --- #\n");
            for(int j = 0; j < 10; j++){
                printf("%s - %li\n", defContato[j].nome, defContato[j].telefone);
            }
        }
    }
}