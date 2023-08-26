#include <stdio.h>
/* Ex 05 Escreva um programa que receba dois valores n1 e n2. Se n1 for igual a 1, o programa
imprime n2 em uma contagem regressiva do valor n2 até 0, se n1 for igual a 0, o programa
imprime n2 em uma contagem progressiva do valor 0 até n2. Faça testes para certificar
que n1 tenha como valor recebido somente 0 ou 1.
*/
int main(void) {
  int n1, n2, i, j;
  printf("Digite o valor de n1: ");
  scanf("%d",&n1);
  printf("Digite o valor de n2: ");
  scanf("%d",&n2);
  if(n1==1){
    for(i=n2;i>=0;i--){
      printf("%d\n",i);
    }
  }else if(n1==0){
    for(i=0;i<=n2;i++){
      printf("%d\n",i);
    }
  }else{
    printf("Invalido");
  }
  return 0;
}