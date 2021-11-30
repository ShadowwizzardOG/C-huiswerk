#include <stdio.h>

int main()
{
    int num;
    struct algemeen
    {
        char naam[20];
        int leeftijd;
        struct opleiding
        {
            char naam[50];
            int instroomjaar;
        } oopleiding;
        

    };

    struct algemeen lijst[2];

    for (num = 0; num < 2; num++)
    {
        printf("Geef een naam: ");
        scanf("%s", lijst[num].naam);

        
        printf("Geef een leeftijd: ");
        scanf("%d", &lijst[num].leeftijd);

        printf("Geef opleiding naam: ");
        scanf("%s", lijst[num].oopleiding.naam);

        printf("Geef instroomjaar: ");
        scanf("%d", &lijst[num].oopleiding.instroomjaar);

        printf("\n");
    }

    for (num = 0; num < 2; num++)
    {
        printf("%s\n%d\n%s\n%d\n\n", lijst[num].naam, lijst[num].leeftijd, lijst[num].oopleiding.naam, lijst[num].oopleiding.instroomjaar);
    }

    return 0;
}