#include <stdio.h>
// escreva um programa que receba 4 notas diferentes e calcule a media final com media ponderada 
int main(void){
  float p1, p2, t1, t2, m1, m2, mf;
  printf("Digite o valor de P1: ");
  scanf("%f",&p1);
  printf("Digite o valor de P2: ");
  scanf("%f",&p2);
  printf("Digite o valor de T1: ");
  scanf("%f",&t1);
  printf("Digite o valor de T2: ");
  scanf("%f",&t2);
  m1 = (p1 * 0.6) + (t1 * 0.4);
  m2 = (p2 * 0.6) + (t2 * 0.4);
  mf = (m1 + m2)/2;
    if(mf>6){
    printf("Aprovado!!\n");
    }else 
      if(mf>=4){
    printf("Reprovado\n");
    } else{
        printf("Reprovado\n");
      
    
    }
  printf("%.2f\n",mf);
  return 0;
}