#include <stdio.h>

int main (){

int a,b;

printf("informe o primeiro valor \n");
scanf ("%i", &a);

printf("informe o segundo valor valor \n");
scanf ("%i", &b);


if(a>b){

    printf("Primeiro maior");
}else{
    if(b>a){
        printf("Segundo maior");
    }else{
        printf("Numero iguais");
    }
    }



return 0;
}
