//Lucas Carvalho da Luz Moura
#include <stdio.h>
#include <stdlib.h>

int main()
{

   int regiao;
   int local;
   float tamanho, valor;

   printf("Qual região fica o terreno? Norte-1 ou Sul-2\n");
   scanf("%d", &regiao);
   printf("O terreno e de esquina? Sim-1 ou Não-2 \n");
   scanf("%d", &local);
   printf("Digite o tamanho do terreno(m²):\n");
   scanf("%f", &tamanho);

    if(regiao == 2)
    {
     valor = tamanho * 150;
    }

    else
    {
     valor = tamanho * 100;
    }

    if(tamanho > 400)
    {
     valor = valor * 1.25;
    }

    if(local == 1)
    {
     valor = valor + 600;
    }
  
  printf("\n O valor final do terreno será de: R$ %.2f \n", valor);
  printf("\n Programa Finalizado \n\n");
  
  system("pause");
}
