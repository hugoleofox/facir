#include <stdio.h>

int main(){
   int i = 10;
   char nome[100];

   printf("Digite uma palavra: ");
   gets(nome);

    for(i=0; i<4; i++)
    {
        printf("%c", nome[i]);
    }
     return 0;
}
