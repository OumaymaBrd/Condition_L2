#include <stdio.h>

int main() {
    // D�claration des variables
    float revenu, deductions, revenu_imposable, impot;
    int statut_fiscal;

    // Demande des informations � l'utilisateur
    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre statut fiscal (1 pour c�libataire, 2 pour mari�, 3 pour chef de famille) : ");
    scanf("%d", &statut_fiscal);

    // D�termination des d�ductions en fonction du statut fiscal
    if (statut_fiscal == 1) {
        deductions = 1000; // C�libataire
    } else if (statut_fiscal == 2) {
        deductions = 2000; // Mari�
    } else if (statut_fiscal == 3) {
        deductions = 3000; // Chef de famille
    } else {
        printf("Statut fiscal invalide.\n");
        return 1;
    }

    // Calcul du revenu imposable
    revenu_imposable = revenu - deductions;

    // Calcul de l'imp�t en fonction du revenu imposable
    if (revenu_imposable <= 20000) {
        impot = revenu_imposable * 0.05; // 5%
    } else if (revenu_imposable <= 50000) {
        impot = revenu_imposable * 0.10; // 10%
    } else {
        impot = revenu_imposable * 0.20; // 20%
    }

    // Affichage du montant de l'imp�t
    printf("Le revenu imposable est : %.2f euros\n", revenu_imposable);
    printf("Les imp�ts � payer sont : %.2f euros\n", impot);

    return 0;
}

