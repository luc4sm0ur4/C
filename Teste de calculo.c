#include <stdio.h>
#include <stdlib.h>

//função que recebe um parametro n, retorne o valor de 1+1/2+1/3+...+1/n

float funcao(float num){
  int i;
  float res;
  res=0;
  for(i=1;i<=num;i++){
     res=res+(float)1/i;
  }
  return res;
}
 int main(){
   float num,res;
   printf("Informe o valor a ser calculado : \n");
   scanf("%f", &num);
   res=funcao(num);
   printf("O resultado do calculo é: %f", res);
   return 0;
 }