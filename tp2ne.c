#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char eva[80];
    int tab[5] = {2000, 1998, 1546, 1665, 1678};
    int i = 0;
    int repoonse;

    printf("entrer votre mot de pass \n");
    scanf("%s", &eva); // Entrer les caracteres dans le tableau
                          //
    bool isCorrect = true;
    size_t length = strlen(eva); //

    // Verification si le nbre entrée est dans le tableau ou pas
    while (i <= 3)
    {
        for (int i = 0; i < length; i++)
        {
            if (!isdigit(eva[i])) // comparation entre nombre et caractere
            {
                isCorrect = false;
            }
        }

        if (isCorrect) // c'est pour verifie si c'est numerique ou non
        {
            printf("Votre text (%s) est un nombre\n", eva);
            scanf("%s", eva);
            reponse = atoi(eva); // conversion

            for (int j = 0; j < 5; j++)
            {
                if (tab[j] == reponse)
                {
                    printf("correct \n");
                    return 0;
                }
            }
            // Commander le nombre d'essaie
            if (i == 0)
            {
                printf(" incorrect \n,Essayer encore \n");
                scanf("%s", &eva);
            }
            else if (i == 1)
            {
                printf(" incorrect \n ,Essayer encore \n");
                scanf("%s", &eva);
            }
            else
            {
                printf("bloqué fin des tentatives \n");
            }
            // fin  nombre d'essaie
        }
        else 
        {


            
             if (i == 0)
            {
                printf(" saisie incorrect \n, Veuillez saisir un entier \n,Essayer encore \n");
                scanf("%s", &eva);
            }
            else if (i == 1)
            {
                printf(" derniere tentative \n, Veuillez saisir un entier \n,Essayer encore \n");
                scanf("%s", &eva);
            }
            else
            {
                printf("bloqué fin des tentatives \n");
                return 0;
            }
        }
        i++;
    }
    
     return 0;
}
