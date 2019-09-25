#include <stdio.h>
#include <stdlib.h>



int main()
{
    int c,cp,s,r;
    c=10;
    cp=0;
    s=0;

    while (c<=100)
    {
        if(c%2==0)
        {
            cp++;
            s=s+c;
            c++;
        }else{
        c++;
        }
    }
    r=s/cp;
    printf("A media aritmetica dos numeros pares de 10 a 100 e igual a %i.\n",r);

    return 0;
}
