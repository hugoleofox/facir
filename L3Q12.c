#include <stdio.h>

int main (){

char nome[15];
float preco,total,total_a_pagar,desconto;
int qt;



printf(" informe o nome do produto \n");
scanf("%s", &nome);

printf("informe o valor do produto \n");
scanf("%f", &preco);

printf("informe a quantidade do produto adquirido \n");
scanf("%i", &qt);

total = qt * preco;

if(qt <= 5){
    desconto = (preco*2)/100;
}else{
    if (qt > 5 &&  qt <= 10){
        desconto = (preco*3)/100;
    }else{
        (preco*5)/100;
    }
}
total_a_pagar = total - desconto;

printf("valor sem desconto: %f \n" , total);
printf("valor com desconto: %f ", total_a_pagar);




return 0;
}
