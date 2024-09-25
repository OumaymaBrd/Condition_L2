#include <stdio.h>
#include<stdlib.h>

int main() {
	
	printf("\t\t programme  qui �value l'�ligibilit� pour un pr�t\n\n");
    // D�claration 
    float revenu;
    int score_credit;
    int duree_pret;

    // Demande des informations � l'utilisateur
    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre score de cr�dit (sur 1000) : ");
    scanf("%d", &score_credit);

    printf("Entrez la dur�e du pr�t (en ann�es) : ");
    scanf("%d", &duree_pret);

    // V�rification des conditions d'�ligibilit�
    if (revenu >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("�ligible pour le pr�t.\n");
    } else if (revenu >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("�ligible avec conditions.\n");
    } else {
        printf("Non �ligible pour le pr�t.\n");
    }

    return 0;
}

