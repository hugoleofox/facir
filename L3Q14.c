#include <stdio.h>


int main(){

int v1,v2=0;
float divisao;
printf("informe o primeiro valor \n");
scanf("%i",&v1);

printf("informe o segundo valor valor, diferente de zero \n");
scanf("%i",&v2);

while(v2 == 0){
    printf("insira um numero diferente de zero ");
    break;
}

divisao = v1/v2;

printf("o resultado da divisao e %f",divisao);





return 0;
}
