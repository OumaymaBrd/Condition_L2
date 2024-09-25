#include <stdio.h>

int main() {
    // Déclaration des variables
    int jours_accordes, jours_utilises, statut_employe;
    int jours_restants;

    // Demande des informations à l'utilisateur
    printf("Entrez le nombre total de jours de congés accordés : ");
    scanf("%d", &jours_accordes);

    printf("Entrez le nombre de jours de congés utilisés : ");
    scanf("%d", &jours_utilises);

    printf("Entrez le statut de l'employé (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut_employe);

    // Vérification si les jours utilisés dépassent les jours accordés
    if (jours_utilises > jours_accordes) {
        printf("Alerte : Les jours de congés utilisés dépassent les jours accordés !\n");
    } else {
        // Calcul des jours restants en fonction du statut de l'employé
        if (statut_employe == 1) {
            jours_restants = jours_accordes - jours_utilises; // Temps plein
        } else if (statut_employe == 0) {
            jours_restants = (jours_accordes / 2) - jours_utilises; // Temps partiel
        } else {
            printf("Statut de l'employé invalide.\n");
            return 1;
        }

        // Affichage des jours restants
        if (jours_restants < 0) {
            printf("Alerte : Vous avez dépassé vos jours de congés !\n");
        } else {
            printf("Nombre de jours de congés restants : %d\n", jours_restants);
        }
    }

    return 0;
}

