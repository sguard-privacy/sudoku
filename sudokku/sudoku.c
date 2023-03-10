#include <stdio.h>
#include <stdlib.h>

#define ROWS 9#include <stdio.h>
#include <stdlib.h>

#define NB_LIGNES 9
#define NB_COLONNES 9

int main() {
    int **grille = (int **)malloc(NB_LIGNES*sizeof(int *));
    for (int i = 0; i < NB_LIGNES; i++) {
        grille[i] = (int *)malloc(NB_COLONNES*sizeof(int));
    }

    FILE *fichier;
    fichier = fopen("sudoku.txt", "r");

    if(fichier == NULL) {
        printf("Erreur: Impossible d'ouvrir le fichier sudoku.txt\n");
        exit(1);
    }

    for (int i = 0; i < NB_LIGNES; i++) {
        for (int j = 0; j < NB_COLONNES; j++) {
            fscanf(fichier, "%1d", &grille[i][j]);
        }
    }

    fclose(fichier);

    // Test pour afficher la grille
    for (int i = 0; i < NB_LIGNES; i++) {
        for (int j = 0; j < NB_COLONNES; j++) {
            printf("%d ", grille[i][j]);
        }
        printf("\n");
    }

    // Libérer la mémoire
    for (int i = 0; i < NB_LIGNES; i++) {
        free(grille[i]);
    }
    free(grille);

    return 0;
}
