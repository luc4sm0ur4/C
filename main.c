#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
int mes, ano, i, op, op2, data[12][4], pta;//AS VARIAVEIS ESTÃO COM 1 A MAIS DO DEFINIDO POIS COMEÇAMOS A GUARDAR OS DADOS DO PONTO 1 E NÃO DO 0//
float media[3];

for (ano=1;ano<=4;ano++) //CONTAGEM POR ANO//
{
  for (mes=1;mes<=12;mes++)//CONTAGEM DOS MESES//
  {
    printf("\nDigite a carga do mês %d e ano %d:\n", mes, ano);
    scanf("%d", &data[ano][mes]);//RECEBIMENTO DAS ENTRADAS E ATRIBUIÇÃO AO ANO E MÊS//
  }
}

printf("\n\n##Data(s) em que não houve recebimento##\n\n");

for (ano=1;ano<=4;ano++)//NOVA PASSAGEM PARA COMPARAR OS DADOS E VERIFICAR A PRESENÇA DO 0, PRIMEIRAMENTE PELOS ANOS//
{
  for (mes=1;mes<=12;mes++)//E AGORA PELOS MESES//
  {
    if(data[ano][mes] == 0) printf("Mês %d do ano %d\n", mes,ano);//APRESENTAÇÃO DA DATA SEM PACOTE//
  }
}

printf("\n\n##Média de pacotes mensalmente##");

for(mes=1;mes<=12;mes++)//LAÇO PARA APRESENTAR A MÉDIA DE PACOTES, SOMANDO OS PACOTES DE CADA MÊS POR ANO. EX: MES 1 DO ANO 1 + MES 1 DO ANO 2 + MES 1 DO ANO 3//
{
  for(ano=1; ano<=4; ano++)//PASSAGEM DE ANOS//
  {
    media[mes]+=data[ano][mes];//SOMA DO NÚMERO DE PACOTES//
  }
  media[mes]=media[mes]/4;

  printf("\n\nMédia de pacotes do mês %d ao longo dos 4 anos: %.2f", mes, media[mes]);
}

printf("\n\n\n\n##Meses em que a média de recebimento foram menores que 50##");

for(mes=1;mes<=12;mes++)//COMO JÁ TEMOS GUARDADAS AS MÉDIAS LIGADAS AO SEU MÊS APENAS VAMOS PASSAR POR ELAS NOVAMENTE E FAZER A COMPARAÇÃO//
{
  if(media[mes]<50) printf("\n\nMês %d ", mes);
}

printf("\n\n##Vez do Usuário##\n");

do //O USUÁRIO TERÁ DUAS OPÇÕES//
{
  printf("\nGostaria de procurar o número de pacotes de um mês específico (1) ou analizar o total em um ano defenido (2)?\n");
  scanf("%d", &op);

  if(op == 1)//CASO QUEIRA UM DADO ESPECÍFICO//
  {
    printf("\nDiga o ano:\n");
    scanf("%d", &ano);

    printf("\nDiga o mês:\n");
    scanf("%d", &mes);

    printf("\nDe acordo com o banco de dados no mês %d do ano %d foram recebidos: %d pacotes\n", mes, ano, data[ano][mes]);
  }


  else
  {
    printf("\nEscolha o ano:\n");
    scanf("%d", &i);

    for(mes=1;mes<=12;mes++)//SOMATORIA DO NUMERO DE PACOTES PASSANDO POR CADA MÊS DE UM DETERMINADO ANO//
    {
     pta+=data[i][mes];
    }

    printf("\nDe acordo com o banco de dados o total de pacotes recebidos nesse ano foram de %d\n", pta);
  }
  
pta=0;//ZERANDO A SOMATÓRIA//

printf("\nDeseja sair do programa (1), ou quer rever algum dado (2)?\n");
scanf("%d", &op2);

}while(op2!=1);

return 0;
}