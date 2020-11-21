#include <stdio.h>

int main(){
   int aR[7][2] = {{1111, 30001000}, 
                   {2222, 30002000},
                   {3333, 30003000}, 
                   {4444, 30004000}, 
                   {5555, 30005000}, 
                   {6666, 30006000}, 
                   {7777, 30007000}};
   int matFuncionario;

   printf("Digite a matrícula desejada: ");
   scanf("%d", &matFuncionario);

   switch(matFuncionario){
       case 1111: 
        for(int i = 0; i < 1; i++){
            for(int j = 0; j <= 1; j++){
                printf("%d ", aR[i][j]);   
                if(j==1){
                    printf("\n");
                }
            }
        }
       break;

       case 2222: 
         for(int i = 1; i < 2; i++){
            for(int j = 0; j <= 1; j++){
                printf("%d ", aR[i][j]);   
                if(j==1){
                    printf("\n");
                }
            }
        }
       break;

       case 3333: 
       for(int i = 2; i < 3; i++){
            for(int j = 0; j <= 1; j++){
                printf("%d ", aR[i][j]);   
                if(j==1){
                    printf("\n");
                }
            }
        }
       break;

       case 4444: 
        for(int i = 3; i < 4; i++){
            for(int j = 0; j <= 1; j++){
                printf("%d ", aR[i][j]);   
                if(j==1){
                    printf("\n");
                }
            }
        }
       break;

       case 5555: 
        for(int i = 4; i < 5; i++){
            for(int j = 0; j <= 1; j++){
                printf("%d ", aR[i][j]);   
                if(j==1){
                    printf("\n");
                }
            }
        }
       break;

       case 6666: 
        for(int i = 5; i < 6; i++){
            for(int j = 0; j <= 1; j++){
                printf("%d ", aR[i][j]);   
                if(j==1){
                    printf("\n");
                }
            }
        }
       break;

       case 7777: 
        for(int i = 6; i < 7; i++){
            for(int j = 0; j <= 1; j++){
                printf("%d ", aR[i][j]);   
                if(j==1){
                    printf("\n");
                }
            }
        }
       break;
   }
   return 0; 
}