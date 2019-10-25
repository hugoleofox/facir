#include <stdio.h>

void main(){
  char nome[100];
  int x;

  printf("Insira uma palavra ou frase:");
  gets(nome);
  x=0;

while(nome[x] != '\0'){
  x++;
}
  printf("O numero de caracteres e %d.",x);
}
