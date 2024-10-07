#include <stdio.h>
//tjeeeeeeeeena fan
int main()
{

    int namn;
    int fråga;
    int alternativ;
    int poäng = 0;
    int val = 0;

    printf("\nHej och välkommen till `Lära känna grupp 3`!");
    printf("\nKlicka siffra 1 för att lära känna Fredrik");
    printf("\nKlicka siffra 2 för att lära känna Nikki");
    printf("\nKlicka siffra 3 för att lära känna Markus");
    printf("\nKlicka siffra 4 för att lära känna David");
    printf("\nKlicka siffra 5 för att lära känna Viktor\n");
    scanf("%i", &namn);

    switch (namn)
    {
    case 1:
        printf("\nFråga 1: Fredrik har tidigare läst en kandidat på universitet, i vilket ämne?");
        printf("\n1: Psykologi");
        printf("\n2: Statsvetenskap");
        printf("\n3: Ekonomi");

        scanf("%d", &val);
        if (val == 1)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        printf("\nFråga 2: Vad gör Fredrik på Fritiden?");
        printf("\n1: Orientering");
        printf("\n2: Klättrar");
        printf("\n3: Tränar till marathon (som alla 30:+are)");
        scanf("%d", &val);
        if (val == 2)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        printf("\nFråga 3: Vad är Fredriks paradrätt?");
        printf("\n1: Pizza");
        printf("\n2: Skaldjurspasta");
        printf("\n3: Lasagne");
        scanf("%d", &val);
        if (val == 2)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        printf("\nFråga 4: Vilken är Fredriks favoritfärg\n");
        printf("\n1: Grön");
        printf("\n2: Blå");
        printf("\n3: Röd");
       
        scanf("%d",&val);
        if(val == 1)
        printf("\n3: Gul");

        scanf("%d", &val);
        if (val == 1)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        if (poäng == 1)
            printf("Du fick %d poäng! Det var inte så bra... Försök igen!", poäng);
        else
            printf("Du fick %d poäng! ", poäng);

        break;

    case 2:

        printf("Vad jobbar Nikki med på sidan?\n1. Häller upp dyr öl\n2. Går ut på promenader med söta hundar\n3. Tar hand om snoriga barn\nSvar: ");
        scanf("%i", &val);

        if (val == 1)
        {
            printf("Rätt svar!\n");
        }
        else
        {
            printf("Fel svar, rätt svar var: 1. Öl\n");
        }

        printf("Om Nikki var en karaktär i Sagan Om Ringen, vilken ras skulle hon vara?\n1. Hobbit\n2. Orch\n3. Alv\nSvar: ");
        scanf("%i", &val);

        if (val == 3)
        {
            printf("Rätt svar!\n");
        }
        else
        {
            printf("Fel svar, rätt svar var: 2. Alv\n");
        }

        printf("Om det var lagligt, vilket djur skulle Nikki vilja äga?\n1. Blåval\n2. Flodhäst\n3. Lejon\nSvar: ");
        scanf("%i", &val);

        if (val == 2)
        {
            printf("Rätt svar! \n");
        }
        else
        {
            printf("Fel svar, rätt svar var: 2. Flodhäst\n");
        }

        printf("Vad är Nikkis favorit färg?\n1. Grön\n2. Blå\n3. Röd\nSvar: ");
        scanf("%i", &val);

        if (val == 1)
        {
            printf("Rätt svar!\n");
        }
        else
        {
            printf("Fel svar, rätt svar var: 1. Grön\n");
        }

        break;

    case 3:
        printf("\nFråga 1: Vilket är Markus favoritdjur?\n 1: Katt 2: Hund 3: Spindlar\n");
        scanf("%i", &val);

        if (val == 1)
        {
            printf("\nKorrekt! Rätt svar: Katt\n");
        }

        else
        {
            printf("\nFel! Rätt svar: Katt\n");
        }

        printf("\nFråga 2: Vad är Markus utbildad till?\n 1: Socionom 2: Sjuksköterska 3: Brandman\n");
        scanf("%i", &val);

        if (val == 2)
        {
            printf("\nKorrekt! Rätt svar: Sjuksköterska\n");
        }

        else
        {
            printf("\nFel! Rätt svar: Sjuksköterska\n");
        }

        printf("\nFråga 3: Vilket är Markus favoritspel?\n 1: Command & Conquer: Red Alert 2. 2: Heroes of Might & Magic 3. 3: Battle For Middle Earth 2\n");
        scanf("%i", &val);

        if (val == 1)
        {
            printf("\nKorrekt! Rätt svar: Command & Conquer: Red Alert 2.\n");
            scanf("%i", &val);
        }

        else
        {
            printf("\nFel! Rätt svar: Command & Conquer: Red Alert 2\n");
            scanf("%i", &val);
        }

        break;

    case 4:
        printf("\nFråga 1: Vilken utbildning läste David aldrig klart?");
        printf("\n1: Veterinär");
        printf("\n2: Lokförare");
        printf("\n3: Kantor");

        scanf("%d", &val);
        if (val == 1)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        printf("\nFråga 2: Vilken stad bor David i?");
        printf("\n1: Stockholm");
        printf("\n2: Västerås");
        printf("\n3: Uppsala");
        scanf("%d", &val);
        if (val == 3)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        printf("\nFråga 3: Vilket instrument spelar David?");
        printf("\n1: Flöjt");
        printf("\n2: Gitarr");
        printf("\n3: Piano");
        scanf("%d", &val);
        if (val == 2)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        printf("\nFråga 4: Vad har David för husdjur?");
        printf("\n1: Katt");
        printf("\n2: Hund");
        printf("\n3: Ko");
        if (val == 2)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        if (poäng == 1)
            printf("Du fick %d poäng! Det var inte så bra... Försök igen!", poäng);
        else
            printf("Du fick %d poäng! ", poäng);

        break;

    case 5:
        printf("\nFråga 1: Vilken sport har Viktor tidigare utövat?");
        printf("\n1: Taekwond");
        printf("\n2: Ballet");
        printf("\n3: Ishockey");

        scanf("%d", &val);
        if (val == 1)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        printf("\nFråga 2: Vilken musik lyssnar Viktor på mest?");
        printf("\n1: Hårdrock");
        printf("\n2: Hip-Hop");
        printf("\n3: Opera");
        scanf("%d", &val);
        if (val == 2)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        printf("\nFråga 3: Vilken är Viktors favorit rätt?");
        printf("\n1: Pizza");
        printf("\n2: Raggmunk");
        printf("\n3: Spagetti och köttfärssås");
        scanf("%d", &val);
        if (val == 2)
        {
            printf("Rätt!");
            poäng++;
        }
        else
        {
            printf("Fel svar!");
        }
        if (poäng == 1)
            printf("Du fick %d poäng! Det var inte så bra... Försök igen!", poäng);
        else
            printf("Du fick %d poäng! ", poäng);

        break;

    default:
        break;
    }

    return 0;
}