#include <stdio.h>

int main() {
    // D�claration des variables
    int jours_accordes, jours_utilises, statut_employe;
    int jours_restants;

    // Demande des informations � l'utilisateur
    printf("Entrez le nombre total de jours de cong�s accord�s : ");
    scanf("%d", &jours_accordes);

    printf("Entrez le nombre de jours de cong�s utilis�s : ");
    scanf("%d", &jours_utilises);

    printf("Entrez le statut de l'employ� (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut_employe);

    // V�rification si les jours utilis�s d�passent les jours accord�s
    if (jours_utilises > jours_accordes) {
        printf("Alerte : Les jours de cong�s utilis�s d�passent les jours accord�s !\n");
    } else {
        // Calcul des jours restants en fonction du statut de l'employ�
        if (statut_employe == 1) {
            jours_restants = jours_accordes - jours_utilises; // Temps plein
        } else if (statut_employe == 0) {
            jours_restants = (jours_accordes / 2) - jours_utilises; // Temps partiel
        } else {
            printf("Statut de l'employ� invalide.\n");
            return 1;
        }

        // Affichage des jours restants
        if (jours_restants < 0) {
            printf("Alerte : Vous avez d�pass� vos jours de cong�s !\n");
        } else {
            printf("Nombre de jours de cong�s restants : %d\n", jours_restants);
        }
    }

    return 0;
}

