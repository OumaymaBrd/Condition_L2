#include <stdio.h>

int main() {
    // Déclaration des variables
    int age, annees_cotisation;
    float montant_epargne, pension;
    int plan;

    // Demande des informations 
    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez le nombre d'années de cotisation : ");
    scanf("%d", &annees_cotisation);

    printf("Entrez le montant total épargné (en euros) : ");
    scanf("%f", &montant_epargne);

    // traiter les cas 
    if (age >= 65) {
        if (annees_cotisation >= 30 && montant_epargne >= 100000) {
            plan = 1; 
        } else if (annees_cotisation >= 20 && montant_epargne >= 50000) {
            plan = 2; 
        } else {
            printf("Conditions non remplies pour un plan de retraite.\n");
            return 1;
        }
    } else {
        plan = 3; 
    }

    // Calcul de la pension de base
    pension = 0; 
    if (plan == 1) {
        pension = 2000;
    } else if (plan == 2) {
        pension = 1000; 
    }

    // Ajout 
    if (montant_epargne > 50000) {
        int tranche = (montant_epargne - 50000) / 10000; 
        pension += pension * 0.05 * tranche; 
    }

    // Affichage 
    if (plan == 1) {
        printf("Plan de retraite recommandé : Plan complet avec pension élevée\n");
    } else if (plan == 2) {
        printf("Plan de retraite recommandé : Plan partiel avec pension moyenne\n");
    } else {
        printf("Plan de retraite recommandé : Plan épargne non encore disponible\n");
    }
    
    printf("Montant de la pension : %.2f euros\n", pension);

    return 0;
}

