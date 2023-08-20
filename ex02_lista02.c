#include <stdio.h>
// escrever um programa que faça uma conta simples na tela e verifique se o usuario acertou a conta
int main(void) {
  int a, b, c;
  a = 10;
  b = 7;
  printf("Qual é o resultado da conta a seguir ? %d + %d = \n", a, b);
  scanf("%d",&c);
  if(c == 17){
    printf("Parabens vc acertou, %d + %d = %d\n", a, b, c);
  }else{
    printf("Vc errou!!!! %d + %d = 17\n", a, b);
  }
  return 0;
}