//Lucas Carvalho da Luz Moura
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  char Nome[10000],cont,alternativas2;
  int ANOS, MESES, TEMPO[12][4];
  int Anousuario1;
  int alternativas;
  double LTS;
  float MEDIAS[12];

 printf("\n Bem vindo(a) ao Programa de Gerenciamento de Encomendas.\n");
 printf("\n Digite seu nome(sem sobrenome): ");
 scanf("%s",Nome);
 printf("\n Digite o Ano de referencia da Contagem:");
 scanf("%d",&Anousuario1);

     for (ANOS=01;ANOS<=04;ANOS++) 
      {
       for (MESES=1;MESES<=12;MESES++)
        {
         printf("\nNúmero de encomendas do %d° mês no %d° ano :", MESES, ANOS);
         scanf("%d", &TEMPO[ANOS][MESES]);
        }
      }printf("\nContagem finalizada e salva no Banco de Dados com Sucesso.\n");
       printf("\n---------------------------------------------------");

  
  //------------Usuario-1-----------------------------/
  do
  {
  printf("\n\nSelecione Agora as opções que deseja verificar: [1]-Média total das Encomendas durante os anos; [2]-Média menor que 50 encomendas durante os 4 anos; [3]-Meses em que tiveram encomendas igual a 0; [4]-Mostrar todos os resultados de uma vez:\n");
  scanf("%d",&alternativas);
  
  if(alternativas == 1)//Mostra a média total 
  {
    for(MESES=1;MESES<=12;MESES++)
    {
     for(ANOS=1; ANOS<=4; ANOS++)
     {
       MEDIAS[MESES]+=TEMPO[ANOS][MESES];
     }
       MEDIAS[MESES]=MEDIAS[MESES]/4;

      printf("\n\nMédia de encomendas no mês %d ao longo dos 4 anos: %.2f\n", MESES,MEDIAS[MESES]);
    }
  }
  
  if(alternativas == 2)//Mostra as médias <50 durante os anos
  {
    for (ANOS=1;ANOS<=4;ANOS++)
    {
     for(MESES=1;MESES<=12;MESES++)
      {
        if(TEMPO[ANOS][MESES]<50) 
        printf("\n\nFoi o mês:%d , ano:%d", MESES, ANOS);
      }
    }
  }
  
  if(alternativas == 3)//Mostra os meses que não tiveram encomendas
  {
    for (ANOS=1;ANOS<=4;ANOS++)
    {
      for (MESES=1;MESES<=12;MESES++)
      {
          if(TEMPO[ANOS][MESES] == 0) printf("Mês:%d ,ano:%d\n", MESES,ANOS);
      }
    }
  }

  if(alternativas == 4)//Mostra as três opções anterios aqui.
  {
   for(MESES=1;MESES<=12;MESES++)//1
    {
     for(ANOS=1; ANOS<=4; ANOS++)
     {
       MEDIAS[MESES]+=TEMPO[ANOS][MESES];
     }
       MEDIAS[MESES]=MEDIAS[MESES]/4;

      printf("\n\nMédia de encomendas no mês %d ao longo desses 4 longos anos: %.2f\n", MESES,MEDIAS[MESES]);
    }printf("\n---------------------------------------------\n");
   
   printf("\nMeses em que as encomendas ficaram menor que 50\n");
   for (ANOS=1;ANOS<=4;ANOS++)
   {
    for(MESES=1;MESES<=12;MESES++)
     {
       if(TEMPO[ANOS][MESES]<50) 
       printf("\n\n Foi o mês:%d -> ano:%d", MESES, ANOS);
     }
   }printf("\n---------------------------------------------\n");

     printf("\nMeses que as encomendas foram igual a 0.\n");
     for (ANOS=1;ANOS<=4;ANOS++)//3
    {
      for (MESES=1;MESES<=12;MESES++)
      {
          if(TEMPO[ANOS][MESES] == 0) 
          printf("Mês:%d ano:%d\n", MESES,ANOS);
      }
    }printf("\n---------------------------------------------\n");
  
  }
   printf("\n\nDeseja ver mais algum valor? (y) sim, quero verificar outro valor. / (n)não, pode continuar\n");
   scanf("%s", &cont);
  } while (cont != 'n');
   
  printf("\n-------------------------------------\n");
  do 
  {
  printf("\n1 - Deseja procurar o número de encomendas de um determinado mês e ano. 2 - Deseja ver o total de encomendas em um determinado ano.\n");
  scanf("%d", &alternativas);

  if(alternativas == 1)
  {
    printf("\nDiga o ano:\n");
    scanf("%d", &ANOS);

    printf("\nDiga o mês:\n");
    scanf("%d", &MESES);

    printf("\nDe acordo com o nosso banco de dados, no mês %d do %d° ano foram recebidos um total de: %d encomendas\n", MESES, ANOS, TEMPO[ANOS][MESES]);
  }

  else 
  {
    int LTS = 0;
        printf("\nEscolha o ano de escolha:\n");
        scanf("%d", &ANOS + 1);

    for (MESES = 0; MESES < 12; MESES++) 
    {
      LTS+= TEMPO[ANOS][MESES];
    }

    printf("\nSegundo o  BD(Banco de Dados), a soma total nesse ano em especifico foi de %d encomendas cadastradas.\n", LTS);
  }
  
  LTS=0;

   printf("\nDeseja finalizar a pesquisa no programa?(y/n)\n");
   scanf("%s", &alternativas2);

  }while(alternativas2!='y'); 
   
    printf("\n\nVolte sempre e tenha um bom dia, sr(a) usuario(a). \n");
    printf("\n Copyright © 2020 . Todos os direitos reservados.\n");
    
   return 0;
}
  
