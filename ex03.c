#include <stdio.h>
// Ex03 receber um valor positivo fazer a contagem de forma decrescente dele na tela.
int main(void) {
  int i,a;
  scanf("%d",&a);
  for(i=a; i>=0;i--){
    printf("%d\n",i);
  }
  
  return 0;
}