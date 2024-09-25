#include <stdio.h>

int main() {
    // D�claration des variables
    int age, type_voiture, accidents;
    float prime_base, prime_finale;

    // Initialisation de la prime de base
    prime_base = 500; // Par exemple, on fixe une prime de base � 500 euros

    // Demande des informations � l'utilisateur
    printf("Entrez votre �ge (en ann�es) : ");
    scanf("%d", &age);

    printf("Entrez le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type_voiture);

    printf("Entrez le nombre d'accidents au cours des 5 derni�res ann�es : ");
    scanf("%d", &accidents);

    // Calcul de la prime en fonction de l'�ge
    if (age < 25) {
        prime_finale = prime_base * 1.5;
    } else if (age >= 25 && age <= 65) {
        prime_finale = prime_base;
    } else {
        prime_finale = prime_base * 1.2;
    }

    // Calcul en fonction du type de voiture
    if (type_voiture == 1) {
        prime_finale *= 2; // Voiture sportive
    } else if (type_voiture == 2) {
        prime_finale *= 1.2; // Voiture utilitaire
    } else if (type_voiture == 3) {
        prime_finale *= 1.1; // Voiture familiale
    }

    // Si le nombre d'accidents est sup�rieur � 1, on ajoute 30% � la prime
    if (accidents > 1) {
        prime_finale *= 1.3;
    }

    // Affichage de la prime finale
    printf("La prime d'assurance finale est : %.2f euros\n", prime_finale);

    return 0;
}

