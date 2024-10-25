#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choix,m_nb,x,i=0;
    const int maxi = 15 , max2 = 10;

    char c,m_ch;

    do {
    do {
    printf("---------1 : Niv 1---------\n");
    printf("---------2 : Niv 2---------\n");
    printf("---------3 : Niv 3---------\n");
    printf("---------0 : Quitter-------\n");
    printf("---------Donnez votre choix----------\n");
    scanf("%d", &choix);
    } while (choix < 0 || choix >3);
    switch(choix){
case 1 :
    i=0;
    srand(time(NULL));
    m_nb = rand() % (101);
    printf("\nVous avez choisi le niveau Facile.\n");
    printf("Devinez le nombre mystère entre 0 et 100.\n");
do {
printf("Entrez votre nombre :");
scanf("%d", &x);
i++;
if (x<m_nb){
         printf("C'est plus, Il vous reste %d tentatives\n",maxi-i);
  }
else if (x>m_nb) {
    printf("C'est moins, Il vous reste %d tentatives\n",maxi-i);
    }
    else {
            printf("Bravo  vous avez gagne au bout de %d tentatives\n",maxi-i);
    }
} while (i < maxi && x != m_nb );
if(i == 15 && x != m_nb) {
            printf("Desole, vous avez atteint le nombre maximal de tentatives.\n");
            printf("Le nombre mystere était %d.\n", m_nb);
        }

    break;
    case 2:
i=0;
    srand(time(NULL));
    m_nb = rand() % (10001);
    printf("\nVous avez choisi le niveau Moyen.\n");
    printf("Devinez le nombre mystère entre 0 et 10000.\n");
do {
printf("Entrez votre nombre :");
scanf("%d", &x);
i++;
if (x<m_nb){
         printf("C'est plus, Il vous reste %d tentatives\n",max2-i);
  }
else if (x>m_nb) {
    printf("C'est moins, Il vous reste %d tentatives\n",max2-i);
    }
    else {

            printf("Bravo  vous avez gagne au bout de %d tentatives\n",maxi-i);
    }
} while (i < max2 && x != m_nb );
if(i == 10 && x != m_nb) {
            printf("Desole, vous avez atteint le nombre maximal de tentatives.\n");
            printf("Le nombre mystere etait %d.\n", m_nb);
        }

    break;

        case 3:
       i=0;
        srand(time(NULL));
        m_nb = rand() % 91 + 10;
        m_ch = 'A' + (rand() % 26);
        printf("\nVous avez choisi le niveau Difficile.\n");
        printf("Devinez le nombre mystère entre 10 et 100 et un caractère entre A et Z.\n");
        do {
            i++;
            printf("Entrez votre nombre : \n");
            scanf("%d", &x);
            printf("Entrez votre caractère : \n");
            scanf(" %c", &c);

            if (x != m_nb) {
                if (x > m_nb) {
                    printf("C'est moins. Il vous reste %d tentatives.\n", max2 - i);
                } else {
                    printf("C'est plus. Il vous reste %d tentatives.\n", max2 - i);
                }
            } else {
                printf("Vous avez trouvé le nombre mystere !\n");
            }

            if (c != m_ch) {
                if (c > m_ch) {
                    printf("Le caractere mystere est avant '%c'.\n", c);
                } else {
                    printf("Le caractère mystere est après '%c'.\n", c);
                }
                printf("Il vous reste %d tentatives.\n", max2 - i);
            } else {
                printf("Vous avez trouve le caractère mystere !\n");
            }
            if (x == m_nb && c == m_ch) {
                printf("Bravo ! Vous avez gagne au bout de %d tentatives.\n", i);
                break;
            }
            if (i >= max2) {
                printf("Désole, vous avez atteint le nombre maximal de tentatives.\n");
                printf("Le mystere était : nombre = %d, caractere = '%c'.\n", m_nb, m_ch);
                break;
            }

        } while (i < max2);

        break;

    }



    }
     while (choix != 0 );


    return 0;
}

