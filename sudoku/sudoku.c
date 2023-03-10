#include <stdio.h>
#include <stdlib.h>

#define NB_ROWS 10
#define NB_COLS 10

int main() {
    int **grid = (int **)malloc(NB_ROWS * sizeof(int *));
    for (int i = 0; i < NB_ROWS; i++) {
        grid[i] = (int *)malloc(NB_COLS * sizeof(int));
    }

    FILE *file;
    file = fopen("sudoku.txt", "r");

    if (file == NULL) {
        printf("Erreur: Impossible d'ouvrir le fichier sudoku.txt\n");
        exit(1);
    }

    for (int i = 0; i < NB_ROWS; i++) {
        for (int j = 0; j < NB_COLS; j++) {
            fscanf(file, "%1d", &grid[i][j]);
        }
    }

    fclose(file);

    // Test pour afficher la grille
    for (int i = 0; i < NB_ROWS; i++) {
        for (int j = 0; j < NB_COLS; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    // Libérer la mémoire
    for (int i = 0; i < NB_ROWS; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}
