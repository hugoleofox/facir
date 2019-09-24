#include <stdio.h>

int main (){

int h1,h2,m1,m2,soma1,soma2;

printf("informe a idade do primeiro homem \n");
scanf ("%i", &h1);

printf("informe a idade do segundo homem \n");
scanf ("%i", &h2);

printf("informe a idade da primeira mulher \n");
scanf ("%i", &m1);

printf("informe a idade da segunda mulher \n");
scanf ("%i", &m2);


if(h1>h2 && m1>m2){
    soma1 = h1+m2;
    soma2 = h2+m1;
    printf(" o resultado do homem mais velho com a mulher mais nova: %i", soma1 );
    printf(" o resultado do homem mais novo com a mulher mais velha: %i", soma2 );
}else{
    if (h1>h2 && m1<m2){
    soma1 = h1+m1;
    soma2 = h2+m2;
    printf("%i o resultado do homem mais velho com a mulher mais nova: ", soma1 );
    printf("%i o resultado do homem mais novo com a mulher mais velha: ", soma2 );
    }else{
        if(h1<h2 && m1>m2){
        soma1 = h2+m2;
        soma2= h1+m1;
        printf("%i o resultado do homem mais velho com a mulher mais nova: ", soma1 );
        printf("%i o resultado do homem mais novo com a mulher mais velha: ", soma2 );


        }else{
            soma1 = h2+m1;
            soma2 = h1+m2;

                printf("%i o resultado do homem mais velho com a mulher mais nova: ", soma1 );
                printf("%i o resultado do homem mais novo com a mulher mais velha: ", soma2 );
            }
        }
    }



return 0;
}
