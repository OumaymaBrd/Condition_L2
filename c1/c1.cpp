#include <stdio.h>
#include<stdlib.h>

int main() {
	
	printf("\t\t programme  qui évalue l'éligibilité pour un prêt\n\n");
    // Déclaration 
    float revenu;
    int score_credit;
    int duree_pret;

    // Demande des informations à l'utilisateur
    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre score de crédit (sur 1000) : ");
    scanf("%d", &score_credit);

    printf("Entrez la durée du prêt (en années) : ");
    scanf("%d", &duree_pret);

    // Vérification des conditions d'éligibilité
    if (revenu >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("Éligible pour le prêt.\n");
    } else if (revenu >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("Éligible avec conditions.\n");
    } else {
        printf("Non éligible pour le prêt.\n");
    }

    return 0;
}

