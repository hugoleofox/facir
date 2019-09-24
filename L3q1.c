#include <stdio.h>

int main (){
float salario,venda;

printf("digite seu salario\n");
scanf ("%f",&salario);
printf("digite o valor de suas vendas\n");
scanf ("%f",&venda);

if(venda > 1.500,00){
    venda = venda * 5/100;
    }else{
    venda = venda * 3/100;
}
    printf("o seu salario mais comissao e de:%f\n", salario + venda);



return 0;
}
