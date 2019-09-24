#include <stdio.h>

int main (){

int a,b,c;

printf("informe o primeiro valor \n");
scanf ("%i", &a);

printf("informe o segundo valor valor \n");
scanf ("%i", &b);

printf("informe o terceiro valor valor \n");
scanf ("%i", &c);


if ((a+b) < c){
    printf("triangulo");
}else{
    if ((b+c) < a){
       printf("triangulo");
    }else{
        if((c+a) < b){
           printf("triangulo");
        }else{
        printf("Nao e triangulo");
        }
    }
}


return 0;
}
