#include <stdio.h>

int main() {
    // D�claration des variables
    float consommation, tarif, facture;
    int type_utilisateur, type_contrat;

    // Demande des informations � l'utilisateur
    printf("Entrez la consommation d'�lectricit� (en kWh) : ");
    scanf("%f", &consommation);

    printf("Entrez le type d'utilisateur (1 pour r�sidentiel, 2 pour commercial) : ");
    scanf("%d", &type_utilisateur);

    printf("Entrez le type de contrat (0 pour standard, 1 pour r�duit) : ");
    scanf("%d", &type_contrat);

    // D�termination du tarif en fonction du type d'utilisateur et du type de contrat
    if (type_utilisateur == 1) { // R�sidentiel
        if (type_contrat == 0) {
            tarif = 0.20; // Contrat standard
        } else {
            tarif = 0.15; // Contrat r�duit
        }
    } else if (type_utilisateur == 2) { // Commercial
        if (type_contrat == 0) {
            tarif = 0.30; // Contrat standard
        } else {
            tarif = 0.25; // Contrat r�duit
        }
    } else {
        printf("Type d'utilisateur invalide.\n");
        return 1;
    }

    // Calcul de la facture de base
    facture = consommation * tarif;

    // Ajout du suppl�ment si la consommation d�passe 500 kWh
    if (consommation > 500) {
        facture *= 1.10; // Suppl�ment de 10%
    }

    // Affichage du r�sultat
    printf("La facture d'�lectricit� est : %.2f euros\n", facture);

    return 0;
}

