#include <stdio.h>
#include <stdlib.h>
#define VAGAS 10
#define VAGAS_2 10
#define LIVRE 0
#define LIVRE_2 0
int estacionamento[VAGAS],estacionamento_2[VAGAS_2];
//estaciona o carro com a placa informada
//caso exista uma vaga livre.
/*Estacionamento 1*/
int estaciona(int placa){
    int i=0, estacionado=0;
   
    printf("\nProcurando vaga");
    for(i=0;i<VAGAS;i++){
        if(estacionamento[i]==LIVRE){
            estacionamento[i]=placa;
            printf("\nO carro foi estacionado na vaga: %02d\n",i+1);
            estacionado=1;
            break;
        }else if(estacionamento[i]==placa){
            printf("\n\n!!!Opa um dos dois carros, e um clone.\n\n");
            estacionado=0;
            break;
        }else{
            printf(".");
        }
    }
    return estacionado;
}

/*Estacionamento 2*/
int estaciona_2(int placa){
    int j=0, estacionado=0;
   
    printf("\nProcurando vaga");
    for(j=0;j<VAGAS_2;j++){
        if(estacionamento_2[j]==LIVRE_2){
            estacionamento_2[j]=placa;
            printf("\nO carro foi estacionado na vaga: %02d\n",j+1);
            estacionado=1;
            break;
        }else if(estacionamento_2[j]==placa){
            printf("\n\n!!!Opa um dos dois carros, e um clone.\n\n");
            estacionado=0;
            break;
        }else{
            printf(".");
        }
    }
    return estacionado;
}

/*Retira - Estacionamento 1*/
int retira(int placa){
    int i=0, estacionado=0;
   
    printf("\nProcurando carro");
    for(i=0;i<VAGAS;i++){
        if(estacionamento[i]==placa){
            printf("\nVaga liberada...\n");
            estacionamento[i]=LIVRE;
            estacionado=1;
            break;
        }else{
            printf(".");
        }
    }
   
    if(estacionado==0){
        printf("nao encontrado");
    }
   
    return estacionado;
}

/*Retira - Estacionamento 2*/
int retira_2(int placa){
    int j=0, estacionado=0;
   
    printf("\nProcurando carro");
    for(j=0;j<VAGAS_2;j++){
        if(estacionamento_2[j]==placa){
            printf("\nVaga liberada...\n");
            estacionamento_2[j]=LIVRE_2;
            estacionado=1;
            break;
        }else{
            printf(".");
        }
    }
   
    if(estacionado==0){
        printf("nao encontrado");
    }
   
    return estacionado;
}

/*Organização dos estacionamentos*/
/*Estacionamento 1*/
int organiza(void){
    int i=0, m=0, aux=0;
    for(i=0;i<VAGAS;i++){
        if(estacionamento[i]==LIVRE){
            for(m=(i+1);m<VAGAS;m++){
                if(estacionamento[m]!=LIVRE){
                    estacionamento[i]=estacionamento[m];
                    estacionamento[m]=LIVRE;
                    break;
                }
            }
        }
    }
    return 0;
}

int organiza_2(void){
    int j=0, n=0, aux=0;
    for(j=0;j<VAGAS_2;j++){
        if(estacionamento_2[j]==LIVRE){
            for(n=(j+1);n<VAGAS_2;n++){
                if(estacionamento_2[n]!=LIVRE_2){
                    estacionamento_2[j]=estacionamento_2[n];
                    estacionamento_2[n]=LIVRE_2;
                    break;
                }
            }
        }
    }
    return 0;
}
 
//verifica como está o estacionamento
int verifica(void){
    int i=0;
    for(i=0;i<VAGAS;i++){
        if(estacionamento[i]==LIVRE){
            printf("\nVAGA[%02d]->Livre", i+1);
        }else{
            printf("\nVAGA[%02d]->carro:[%04d]", i+1, estacionamento[i]);
        }
    }
    return 0;    
}

int verifica_2(void){
    int j=0;
    for(j=0;j<VAGAS;j++){
        if(estacionamento_2[j]==LIVRE_2){
            printf("\nVAGA[%02d]->Livre", j+1);
        }else{
            printf("\nVAGA[%02d]->carro:[%04d]", j+1, estacionamento_2[j]);
        }
    }
    return 0;    
}
   
int main(void){
    int placa=0, opcao=0;
   
    //loop principal
    while(1){
        //ação
        printf("\n\n***** Menu principal *****\n");
        printf("[1]para estacionar carro no 1° estacionamento\n");
        printf("[2]para estacionar carro no 2° estacionamento\n");
        printf("[3]para retirar carro do 1° estacionamento\n");
        printf("[4]para retirar carro do 2° estacionamento.\n");
        printf("[5]verificar o estado das vagas.\n");
        printf("[6]verificar o estado das vagas.\n");        
        printf("[7 e 8]organizar os estacionamentos.\n");
        printf("[0]para sair do programa.\n\n");
        printf("Informe a opcao: ");
        scanf("%d", &opcao);
       
        //sai sem fazer nada
        if(opcao==0){ break; }
           
        //verica a ação a ser tomada        
        switch(opcao){
            case 0:
                return 0;
            case 1:
                printf("\nInforme a placa do carro:");        
                scanf("%d",&placa);                
                estaciona(placa);
                break;

            case 2:
                 printf("\nInforme a placa do carro:");        
                scanf("%d",&placa);                
                estaciona_2(placa);
                break;

            case 3:
                printf("\nInforme a placa do carro:");        
                scanf("%d",&placa);                
                retira(placa);
                break;

            case 4:
                 printf("\nInforme a placa do carro:");        
                scanf("%d",&placa);                
                retira_2(placa);
                break;

            case 5:
                 verifica();
                 break;
                 
            case 6:
                 verifica_2();
                 break;
            case 7:                
                 organiza();
                 break;
                 
            case 8:     
                 organiza_2();
                 break;                
        }            
    }        
    return 0;
}
