#include <stdio.h>
int main()
{
    int math[2], pc[2], num[2], franç[2];
    int i = 0, s = 0, j;
    float MG, M1, M2, M3, M4;
    const int C1 = 4, C2 = 2, C3 = 4, C4 = 3;
    char *eva[80];
    // nom de l'élève

      printf("entrer le nom\n");
       scanf("%s", &eva);


    for (i = 0; i <= 20; i++)
    {
        for (j = 0; j <= 2; j++)

        {
            /* les notes de maths*/

            printf("saisie les notes de maths\n");

            scanf("%d", &math[j]);

        
            if( (math[j]<0) || (math[j]>20) )
                {
            printf(" les notes doivent compris entre 0 et 20\n");
            return 0;
            }
            else
            {("pas de notes");
            
            }
         j++;
        }
        /* les notes de pc */
        for (j = 0; j <= 2; j++)
        {

            printf("saisie les notes de pc\n");
            scanf("%d", &pc[j]);
            if( (pc[j]<0) || (pc[j]>20) )
                {
            printf(" les notes doivent compris entre 0 et 20\n");
            return 0;
            }
            else
            {("pas de notes");
          
            }
            j++;
        }

        for (j = 0; j <= 2; j++)
        {
            /* les notes de numérique*/

            printf("saisie les notes de num\n");
            scanf("%d", &num[j]);
            

            if( (num[j]<0) || (num[j]>20) )
                {
            printf(" les notes doivent compris entre 0 et 20\n");
            return 0;
            }
            else
            {("pas de notes");
            
            } j++;
        }
        for (j = 0; j <= 2; j++)
        { /* les notes de français*/

            printf("saisie les notes de français\n");
            scanf("%d", &franç[j]);
            if( (franç[j]<0) || (franç[j]>20) )
            {
                printf(" les notes doivent compris entre 0 et 20\n");
                return 0;
            }
            else
            {
                ("pas de notes");
            }

            j++;
        }

        M1 = ((s + math[j]) * C1) / 2;
        M2 = ((s + pc[j]) * C2) / 2;
        M3 = ((s + num[j]) * C3) / 2;
        M4 = ((s + franç[j]) * C4) / 2;
        // affichages de chaque matiere
        printf("la moyenne de math est de%f\n:", M1);
        printf("la moyenne de pc est de%f\n:", M2);
        printf("la moyenne de numerique est de%f\n:", M3);
        printf("la moyenne de français est de%f\n:", M4);
           //moyenne générale
        MG = ((M1 + M2 + M3) / (C1+C2+C3+C4));
        printf("la moyenne générale est de %f\n:", MG);
        //conditon des mentions
        if (MG < 10)
        {
            printf("mediocre\n");
        }
        else if (MG == 10)
        {
            printf("passable\n");
        }
        else if (MG >= 12 && MG <= 14)
        {
            printf("ASSEZ BIEN\n");
        }
        else
        {
            printf("EXCELLENT\n");
        }

        return 0;
    }

   return 0;
}
