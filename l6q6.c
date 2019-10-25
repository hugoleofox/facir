#include <stdio.h>
#include <string.h>

int main(){

   char nome[10];
   char sexo[100];
   int idade;
   int n;

      printf("Digite seu nome  ");
      gets(nome);
      printf("Digite seu sexo  ");
       gets(sexo);
      printf("Digite sua idade  ");
      scanf("%i",&idade);

    if(strcmp(sexo,"feminino")==0 && idade<25){
      printf("%s ACEITA", nome);
    } else {
      printf("NÃO ACEITA");
    }

     return 0;
}
