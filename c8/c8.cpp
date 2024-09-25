#include <stdio.h>

int main() {
    // D�claration des variables
    int age, historique_medical, type_couverture;
    int plan;

    // Demande des informations � l'utilisateur
    printf("Entrez votre �ge : ");
    scanf("%d", &age);

    printf("Entrez votre historique m�dical (0 pour aucun probl�me, 1 pour probl�me mineur, 2 pour probl�me majeur) : ");
    scanf("%d", &historique_medical);

    printf("Choisissez le type de couverture (1 pour de base, 2 pour �tendue) : ");
    scanf("%d", &type_couverture);

    // D�termination du plan en fonction de l'�ge et de l'historique m�dical
    if (age < 30) {
        plan = 1; // Plan de base
    } else if (age >= 30 && historique_medical == 0) {
        plan = 1; // Plan de base
    } else if (age >= 30 && historique_medical >= 1) {
        plan = 2; // Plan �tendu
    } else {
        printf("Erreur dans la s�lection du plan.\n");
        return 1;
    }

    // Affichage du type de plan
    if (plan == 1) {
        printf("Plan de sant� recommand� : Plan de base\n");
    } else if (plan == 2) {
        printf("Plan de sant� recommand� : Plan �tendu\n");
    }

    // Ajout de la couverture suppl�mentaire si le probl�me m�dical est majeur
    if (historique_medical == 2) {
        printf("Une couverture suppl�mentaire est ajout�e en raison du probl�me m�dical majeur.\n");
    }

    return 0;
}

