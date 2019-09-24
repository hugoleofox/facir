#include <stdio.h>

int main (){
int v1,v2,v3;

printf("informe o primeiro numero\n");
scanf("%i", &v1);

printf("informe o segundo numero\n");
scanf("%i", &v2);

printf("informe o terceiro numero?\n");
scanf("%i", &v3);

if(v1 > v2&&v3){
    printf("o maior numero e:\n%i", v1);

}else{
    if(v2 > v1&&v3){
        printf("o maior numero e:\n%i",v2);
    }else{
        printf("o maior numero e:\n%i",v3);
    }









}




return 0;
}
