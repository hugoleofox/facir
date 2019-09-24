#include <stdio.h>

int main (){
float conta,saldo,debito,credito;

printf("digite o numero de sua conta\n");
scanf("%f", &conta);

printf("informe seu saldo atual\n");
scanf("%f", &saldo);

printf("informe quanto voce tem de credito\n");
scanf("%f", &credito);

printf("informe o seu debito\n");
scanf("%f", &debito);

saldo = saldo - debito + credito;

if(saldo < 0){
    printf("saldo negativo");
}else{
    printf("saldo positivo");
}




return 0;

}
