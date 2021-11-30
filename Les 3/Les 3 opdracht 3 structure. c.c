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
        } opleiding1;
        

    };

    struct algemeen lijst[2];

    for (num = 0; num < 2; num++)
    {
        printf("Geef een naam: ");
        scanf("%s", lijst[num].naam);

        
        printf("Geef een leeftijd: ");
        scanf("%d", &lijst[num].leeftijd);

        printf("Geef opleiding naam: ");
        scanf("%s", lijst[num].opleiding1.naam);

        printf("Geef instroomjaar: ");
        scanf("%d", &lijst[num].opleiding1.instroomjaar);

        printf("\n");
    }

    for (num = 0; num < 2; num++)
    {
        printf("%s\n%d\n%s\n%d\n\n", lijst[num].naam, lijst[num].leeftijd, lijst[num].opleiding1.naam, lijst[num].opleiding1.instroomjaar);
    }

    return 0;
}
