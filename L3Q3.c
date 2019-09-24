#include <stdio.h>

int main (){

int atual,maxima,minima,media;

printf("qual a quantidade atual?\n");
scanf("%i", &atual);

printf("qual a quantidade minima?\n");
scanf("%i", &minima);

printf("qual a quantidade maxima?\n");
scanf("%i", &maxima);

((media = maxima + minima)/2);

if (atual >= media){
    printf ("nao efetuar compra\n");
}else{
    printf ("efetuar compra");
}



return 0;
}
