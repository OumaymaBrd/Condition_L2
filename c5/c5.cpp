#include <stdio.h>

int main() {
    // Déclaration des variables
    float budget;
    int destination, personnes;
    int type_voyage;

    // Demande des informations à l'utilisateur
    printf("Entrez votre budget (en euros) : ");
    scanf("%f", &budget);

    printf("Entrez le nombre de personnes : ");
    scanf("%d", &personnes);

    printf("Choisissez la destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &destination);

    // Détermination du type de voyage en fonction du budget
    if (budget >= 1000) {
        type_voyage = 1; // Voyage haut de gamme
    } else if (budget >= 500 && budget < 1000) {
        type_voyage = 2; // Voyage moyen
    } else {
        type_voyage = 3; // Voyage économique
    }

    // Affichage du type de voyage
    switch (type_voyage) {
        case 1:
            printf("Voyage haut de gamme.\n");
            break;
        case 2:
            printf("Voyage moyen.\n");
            break;
        case 3:
            printf("Voyage économique.\n");
            break;
        default:
            printf("Erreur dans la détermination du voyage.\n");
            break;
    }

    // Recommandation de la destination en fonction du budget et du nombre de personnes
    if (destination == 1 && budget >= 1000 && personnes > 2) {
        printf("Destination recommandée : Plage.\n");
    } else if (destination == 2 && budget >= 500 && personnes <= 2) {
        printf("Destination recommandée : Montagne.\n");
    } else if (destination == 3) {
        printf("Destination recommandée : Ville.\n");
    } else {
        printf("Les critères pour cette destination ne correspondent pas aux recommandations.\n");
    }

    return 0;
}

