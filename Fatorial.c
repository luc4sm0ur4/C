#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero)
{
  int resultado,i;
  resultado=1;

  for(i=numero;i>=1;i--){
    resultado=resultado*i;
  }
  return resultado;
}

int main()
{
  int n,fat;
  printf("Informe o valor para o calculo \n");
  scanf("%d",&n);
  fat=fatorial(n);
  printf("O fatorial de %d é: %d",n,fat);

  return 0;
}