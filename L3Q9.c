#include <stdio.h>

int main (){

char time1[15],time2[15];
int g1,g2;

printf("informe o nome do primeiro time \n");
gets(&time1);

printf("informe o nome do segundo time \n");
gets(&time2);

printf("informe o numero de gols do \n %s ", time1 );
scanf ("%i", &g1);

printf("informe o numero de gols do \n %s ", time2 );
scanf ("%i", &g2);

if(g1 > g2){
    printf("vencedor \n %s ", time1);
    }else{
        if(g2> g1){
        printf("vencedor \n %s ", time2);
            }else{
                printf("empate");
    }
}





return 0;
}
