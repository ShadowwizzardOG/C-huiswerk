#include <stdio.h>
#include <string.h>


int main()
{
    char zin[18];
    printf("Type een zin: ");
    gets(zin);
    printf("%s\n", zin);
    printf("Je hebt %d karakters ingevoerd.", strlen(zin));
    return 0;
}