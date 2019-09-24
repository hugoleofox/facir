#include <stdio.h>

int main (){

int v1,v2,v3;

printf("informe o primeiro valor \n");
scanf ("%i", &v1);

printf("informe o segundo valor valor \n");
scanf ("%i", &v2);

printf("informe o terceiro valor valor \n");
scanf ("%i", &v3);

if(v1 > v2 && v2 > v3){
   printf("a ordem crescente e: \n%i%i%i", v1,v2,v3);
}else{
    if (v2 > v3 && v3 > v1){
        printf ("a ordem crescente e: \n%i%i%i", v2,v3,v1);
    }else{
        if(v3 > v1 && v1 > v2){
            printf("a ordem crescente e: \n%i%i%i", v3,v1,v2);
        }else{
            if(v1 > v3 && v3 > v2){
                printf("a ordem crescente e: \n%i%i%i", v1,v3,v2);
            }else{
                printf("a ordem crescente e: \n%i%i%i", v2,v1,v3);

    }}}}



return 0;
}
