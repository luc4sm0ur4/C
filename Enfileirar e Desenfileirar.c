/*Aluno: Lucas Carvalho da Luz Moura*/
/*Email: carvalho.lucas1@mail.uft.edu.br*/
/*Matricula: 2020111816*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Variáveis públicas
int vetor[5];
int xvetor[5];
int Topo = 0;

int contavetor()
{
     //Variáveis privadas   
      int     tamanho;
      double  valor;
      tamanho = 0;
      valor   = 0;
      int contador = 0;
 //..................................................
  
      for(contador = 1;contador <=5 ;contador++)
      {
        valor = vetor[contador];
        if(valor != 0)
        tamanho++;
      }       
       return tamanho;	
}

//Fila Cheia.
int cheia()
{
   		Topo=contavetor();
   		if(Topo >= 5)
   		 return 0;
   		else
   		 return 1;
}
   	
//Fila Vazia.
int vazia()
    {
    	Topo=contavetor();
    	if(Topo == 0)
    	 return 0;
    	else
    	 return 1;
    }  
    
int enfileirar(int n){
	if(cheia() != 0)
  {
	   Topo++;
	    vetor[Topo]=n;
	   printf("Número enfileirado %d\n",n);
	}
	
  else
  {
	   printf("A fila ja esta cheia\n");
	   system("pause");
	}
}
  
int mostrarFila()
{
    int i = 1;        
  	if(vazia() != 0)
    {
  		for(i;i<=5;i++)
  		 if(vetor[i] != 0)
  		  printf("\n A posicao %d da fila contem o seguinte número: %d\n",i, vetor[i]);
    }
    else
    {
  	     printf("A fila não tem nenhum número.\n");
    }
}    
    
int desenfileirar()
  {
    int cont = 1;    
  	if(vazia() != 0)
    {
        printf("Desenfileirou %d \n",vetor[1]);       
  		  vetor[1] = 0;//Desenfileirou o número da fila.
  	    while( cont <= 5)
         {
          cont++;  
          xvetor[cont-1] = vetor[cont];
         }
     //Remontando o vetor principal.
     cont = 1;
     while( cont <= 5)
     {
      vetor[cont] = xvetor[cont];
        xvetor[cont] = vetor[cont];
      cont++;  
     }	
    }
    else{
    	printf("A fila esta vazia, não existe elementos para desempilhar!\n");
    }
  }

//Programa principal.   	
int main()
{
 printf("Programa de enfileirar e desenfileirar.\n");
 printf("\n");
 enfileirar(10);
 printf("\n");       
 enfileirar(20);
 printf("\n");
 desenfileirar();
 printf("\n");
 enfileirar(30);
 printf("\n");
 enfileirar(45);
 printf("\n");
 enfileirar(21);
 printf("\n");
 desenfileirar();
 printf("\n");
 desenfileirar();
 printf("\n");

 printf("\n");  
 mostrarFila();
 printf("\n");
 return 0;
}
