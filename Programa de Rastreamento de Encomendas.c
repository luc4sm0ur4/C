#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) 
{
  char Nome[10000];
  char rastreio[500000];

//Introdução do Programa/ 
  printf(" Digite seu nome: ");
  scanf("%s", Nome);
  printf("\n Bem-vindo ao rastreador de encomendas , %s \n", Nome);


//Programa/
  printf("\nDigite o seu código de rastreamento:");
  scanf("%s", rastreio);

  printf("\n\nProcurando o seu código '%s' no banco de dados.\n",rastreio);
  printf("\n Aguarde.");
  printf("\n .");
  printf("\n .");

  printf("\n\nEncontramos com sucesso seu código,para mais detalhes clique em:");
  printf(" https://track.ebanx.com/pt/t?trackingCode=%s",rastreio);
  
    
//Parte Final do programa/
  printf("\n\nVolte sempre e tenha um bom dia, sr(a) usuario(a) %s \n", Nome);
  printf("\n Copyright © 2020 . Todos os direitos reservados.\n");
  
  return 0;
}
