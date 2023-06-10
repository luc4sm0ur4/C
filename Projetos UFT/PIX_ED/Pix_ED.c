#include <stdio.h> 
#include "PixED.h" 
void inicializa(PixED *conta, int pix, double saldo) { 
/*quando a variável é ponteiro pode-se usar a -> */ 
 conta->pix = pix; 
 conta->saldo = saldo; 
} 
void deposito(PixED *conta, double valor){ 
/*quando a variável é ponteiro pode-se usar a notação (*conta). */ 
 (*conta).saldo += valor; 
} 
void saque(PixED *conta, double valor){ 
 (*conta).saldo -= valor; 
} 

void transferencia(PixED* conta, int pix,double valor){
  (*conta).saldo -= valor;
}

void imprime(PixED conta){ 
/* quando a variável não é ponteiro, deve-se usar apenas "." */ 
 printf("Pix: %d \n", conta.pix); 
 printf("Saldo: %f \n", conta.saldo); 
} 
