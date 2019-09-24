#include <stdio.h>

int main (){

float n1,n2,n3,exer,media;

printf("informe a primeira nota \n ");
scanf ("%f", &n1);

printf("informe a segunda nota \n ");
scanf ("%f", &n2);


printf("informe a terceira nota nota \n ");
scanf ("%f", &n3);


printf("escreva a sua media de exercicios \n ");
scanf ("%f", &exer);

media = (((n1+n2)*2) + ((n3*3)*3) + media)/7;

if (media >= 9){
    printf("Conceito A");
}else{
    if (media >= 7,5 && media < 9){
        printf("conceito B");
    }else{
        if (media >=6 && media < 7,5){
            printf("Conceito C");
        }else{
            printf("conceito D");
        }
    }
}

return 0;
}
