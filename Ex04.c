#include <stdio.h>
/* Ex04  Escreva um programa que receba um valor n positivo e escreva uma contagem
regressiva do valor até –n. Seu programa só deve aceitar valores positivos.*/
int main(void) {
int i, a, j;
  scanf("%d",&a);
  for(i=a; i>=-a;i--){
    printf("%d\n",i);  
  
  }
  return 0;
}