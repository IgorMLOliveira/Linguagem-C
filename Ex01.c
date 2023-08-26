#include <stdio.h>
// Ex 01 fazer tabuada
int main(void){
int i,j,x;
  for(i=0; i<=9; i++){
    for(j=0; j<=9; j++){
      x = i * j;
      printf("%d x %d =%d\n",i,j,x);
  }
}


return 0;
}