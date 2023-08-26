#include <stdio.h>
// Ex02 receber um positivo valor e exibir ele na tela n vezes.
int main(void) {
  int i,a;
  scanf("%d",&a);
  for(i=0; i < a;i++){
    printf("%d\n", a);
  }
  
  return 0;
}