/* definição do tipo contaBancaria */ 
typedef struct { 
int pix; 
double saldo; 
} PixED; 
/* Definição das funções (operações) */ 
void inicializa(PixED* conta, int pix, double saldo);
void transferencia(PixED* conta, int pix,double valor); 
void deposito(PixED* conta, double valor); 
void saque(PixED* conta, double valor); 
void imprime(PixED conta); 