#include <stdio.h>

int main(void) {
   int n1, n2;
    printf("Digite n1: ");
    scanf("%d",&n1);
    printf("Digite o valor de n2: ");
    scanf("%d",&n2);
      if(n1>n2){
        printf("O valor de %d é maior que %d\n",n1, n2);  
      }else{
        printf("%d não é maior que %d\n", n1, n2);
      }
  return 0;
}