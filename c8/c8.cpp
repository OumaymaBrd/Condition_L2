#include <stdio.h>

int main() {
    // Déclaration des variables
    int age, historique_medical, type_couverture;
    int plan;

    // Demande des informations à l'utilisateur
    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur) : ");
    scanf("%d", &historique_medical);

    printf("Choisissez le type de couverture (1 pour de base, 2 pour étendue) : ");
    scanf("%d", &type_couverture);

    // Détermination du plan en fonction de l'âge et de l'historique médical
    if (age < 30) {
        plan = 1; // Plan de base
    } else if (age >= 30 && historique_medical == 0) {
        plan = 1; // Plan de base
    } else if (age >= 30 && historique_medical >= 1) {
        plan = 2; // Plan étendu
    } else {
        printf("Erreur dans la sélection du plan.\n");
        return 1;
    }

    // Affichage du type de plan
    if (plan == 1) {
        printf("Plan de santé recommandé : Plan de base\n");
    } else if (plan == 2) {
        printf("Plan de santé recommandé : Plan étendu\n");
    }

    // Ajout de la couverture supplémentaire si le problème médical est majeur
    if (historique_medical == 2) {
        printf("Une couverture supplémentaire est ajoutée en raison du problème médical majeur.\n");
    }

    return 0;
}

