#include <stdio.h>

int main() {
    // Déclaration des variables
    float revenu, deductions, revenu_imposable, impot;
    int statut_fiscal;

    // Demande des informations à l'utilisateur
    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) : ");
    scanf("%d", &statut_fiscal);

    // Détermination des déductions en fonction du statut fiscal
    if (statut_fiscal == 1) {
        deductions = 1000; // Célibataire
    } else if (statut_fiscal == 2) {
        deductions = 2000; // Marié
    } else if (statut_fiscal == 3) {
        deductions = 3000; // Chef de famille
    } else {
        printf("Statut fiscal invalide.\n");
        return 1;
    }

    // Calcul du revenu imposable
    revenu_imposable = revenu - deductions;

    // Calcul de l'impôt en fonction du revenu imposable
    if (revenu_imposable <= 20000) {
        impot = revenu_imposable * 0.05; // 5%
    } else if (revenu_imposable <= 50000) {
        impot = revenu_imposable * 0.10; // 10%
    } else {
        impot = revenu_imposable * 0.20; // 20%
    }

    // Affichage du montant de l'impôt
    printf("Le revenu imposable est : %.2f euros\n", revenu_imposable);
    printf("Les impôts à payer sont : %.2f euros\n", impot);

    return 0;
}

