#include <stdio.h>
#include "hello.h"

int main() 
{
    int a;
    printf("Kies 1, 2 of 3: ");
    scanf("%d",&a);
    if (a < 0)
    {
        return(0);
    }

    if (a == 2)
    {
        mainvaneen();
    }
    printf("keuze was %d", a);



    return(0);
}