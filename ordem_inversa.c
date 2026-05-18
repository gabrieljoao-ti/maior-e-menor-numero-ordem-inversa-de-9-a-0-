#include<stdio.h>
#include<stdlib.h>

int main (void){

  float numero[10];
  int i;
  float maior;
  float menor;
  
  for(i=10;i>=0;i--){

    printf("Preenchendo a posicao %d:", i);
    scanf("%f", &numero[i]);
    }

    maior = numero[0];
    menor = numero[0];

    for(i=0;i<10;i++){
       if(numero[i] > maior)
          maior = numero[i];
       else if(numero[i] < menor)
          menor = numero[i];
    }
  printf("O maior numero e: %.2f\n", maior);
  printf("O menor numero e: %.2f\n", menor);
  
  system("pause");
  return 0;
}
  
