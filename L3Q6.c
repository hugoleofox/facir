#include <stdio.h>

int main (){
int v1,v2,v3;

printf("informe o primeiro numero\n");
scanf("%i", &v1);

printf("informe o segundo numero\n");
scanf("%i", &v2);

printf("informe o terceiro numero?\n");
scanf("%i", &v3);

if(v1&&v2 > v3){
    printf("a soma dos dois maiores%i\n",(v1+v2));
}else{
    if(v2&&v3 > v1){
    printf("a soma dos dois maiores%i\n",(v3+v2));

    }else{
        printf("a soma dos dois maiores%i\n",(v3+v1));
    }




}



return 0;
}
