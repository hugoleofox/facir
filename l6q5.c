#include <stdio.h>
#include <string.h>

int main(){

   char nome[100];
   int n;

    printf("Digite um palavra  ");
    gets(nome);

    n=strlen(nome);
    printf("%i",n);


     return 0;
}
