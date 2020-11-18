#include <stdio.h>

int ParImpar(int bianca){
  
  if(bianca%2==0){
    printf("\nO número %d é par.\n", bianca);
  } else {
    printf("\nO número %d é impar.\n", bianca);
  }

  return 0;
}

int main() {
  
  int num, vetnum[5];

    for(int cont=0; cont<5; cont++){
      do{
        printf("Digite um número maior que zero.\n");
        scanf("%d", &vetnum[cont]);
          if(vetnum[cont]<=0){
            printf("Número invalido.\n");
          }
      } while (vetnum[cont]<=0);

      ParImpar(vetnum[cont]);
    }
}