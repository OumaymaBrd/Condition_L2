#include <stdio.h>

int main() {
    // D�claration des variables
    int score_performance, anciennete, recompenses;
    float performance_score_bonus;
    int evaluation;

    // Demande des informations � l'utilisateur
    printf("Entrez le score de performance (de 0 � 100) : ");
    scanf("%d", &score_performance);

    printf("Entrez l'anciennet� (en ann�es) : ");
    scanf("%d", &anciennete);

    printf("Entrez le nombre de r�compenses re�ues (0 pour aucune, 1 pour une, 2 pour deux ou plus) : ");
    scanf("%d", &recompenses);

    // Calcul du score bonus bas� sur les r�compenses
    if (recompenses == 1) {
        performance_score_bonus = score_performance * 1.1; // 10% de bonus
    } else if (recompenses >= 2) {
        performance_score_bonus = score_performance * 1.2; // 20% de bonus
    } else {
        performance_score_bonus = score_performance; // Pas de bonus
    }

    // Evaluation de la performance bas�e sur le score et l'anciennet�
    if (performance_score_bonus >= 90 && anciennete >= 5) {
        evaluation = 1; // Excellente
    } else if (performance_score_bonus >= 75 && anciennete >= 3) {
        evaluation = 2; // Bonne
    } else if (performance_score_bonus >= 50 && anciennete < 3) {
        evaluation = 3; // Satisfaisante
    } else {
        evaluation = 4; // Insuffisante
    }

    // Affichage de l'�valuation et du score final avec bonus
    printf("Score de performance avec bonus : %.2f\n", performance_score_bonus);

    // Affichage de l'�valuation bas�e sur la variable "evaluation"
    switch (evaluation) {
        case 1:
            printf("�valuation de la performance : Excellente\n");
            break;
        case 2:
            printf("�valuation de la performance : Bonne\n");
            break;
        case 3:
            printf("�valuation de la performance : Satisfaisante\n");
            break;
        case 4:
            printf("�valuation de la performance : Insuffisante\n");
            break;
        default:
            printf("Erreur dans l'�valuation.\n");
            break;
    }

    return 0;
}

