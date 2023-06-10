/*Aluno: Lucas Carvalho da Luz Moura */
/*E-mail: carvalho.lucas1@mail.uft.edu.br */
/*Matricula: 2020111816 */
#include <stdio.h> 
#include "Pix_ED.h" 

int main (int argc, char *argv[], char *msg[64]) 
{ 
   printf("                   Banco GG\n");
 
   /*Informações da primeira conta */
            printf("\n----------Informações--Conta 1----\n");
            PixED conta1; 
            inicializa(&conta1,32183320,300.00); /*No programa optei por usar um numero de teleone como chave PIX */
            printf("\n Antes da movimentação: \n"); 
            imprime(conta1); 
            deposito(&conta1, 00.00); /*Inserir dinheiro*/
            saque(&conta1, 00.00); /*Retirar dinheiro*/
            printf("\n Depois da movimentação: \n"); 
            imprime(conta1);
   printf ("\n------------------------------------------------\n ");

  /*transferencia pix */
            printf("\ntransferencia Pix do Banco GG\n");
 
            inicializa(&conta1,32183320,300.00);
            transferencia(&conta1,32183320, 50.00);
            imprime(conta1);
            printf("Digita uma mensagem para o recebedor do dinheiro:");
            scanf("%s",msg);
            printf("\nTransferencia de 50 reias feita para a conta 2 com Pix numero 998080101, com a seguinte mensagem: %s\n", msg);
            printf ("\n------------------------------------------------\n ");
  /*------------------------------------*/

  /*Informações da segunda conta */
            printf("\n----------Informações--Conta 2----\n");
            PixED conta2; 
            inicializa(&conta2,998080101,350.00); 
            printf("\n Antes da movimentação: \n"); 
            imprime(conta2); 
            deposito(&conta2, 00.00); /*Inserir dinheiro*/
            saque(&conta2, 00.00); /*Retirar dinheiro*/
            printf("\n Depois da movimentação: \n"); 
            imprime(conta2);
  /*---------------------------------------*/

   printf ("\n------------------------------------------------\n ");


  /*transferencia Pix*/
            printf("\n Transferencia recebida de conta1: 32183320, no valor de 50 reias, com a seguinte frase: %s\n\n",msg);
            transferencia(&conta2,998080101 , -50.00);
            imprime(conta2);

  return 0;
} 
