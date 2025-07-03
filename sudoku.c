#include <stdio.h>

int deucerto(int sudoku[9][9]) {
    int i, j, k, l;

    for (i = 0; i < 9; i++) {
        int cont[10] = {0};
        for (j = 0; j < 9; j++) {
            int num = sudoku[i][j];
            if (cont[num]) return 0;
            cont[num] = 1;
        }
    }

    for (j = 0; j < 9; j++) {
        int cont[10] = {0};
        for (i = 0; i < 9; i++) {
            int num = sudoku[i][j];
            if (cont[num]) return 0;
            cont[num] = 1;
        }
    }

    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            int cont[10] = {0};
            for (k = 0; k < 3; k++) {
                for (l = 0; l < 3; l++) {
                    int num = sudoku[i + k][j + l];
                    if (cont[num]) return 0;
                    cont[num] = 1;
                }
            }
        }
    }

    return 1;
}

int main (){
    int sudoku[9][9], i, j, troca;

    printf("========= SUDOKU ========\n");
    printf("| 1 3 2 | 5 7 9 | 4 6 8 |\n");
    printf("| 4 0 8 | 2 6 1 | 3 7 5 |\n");
    printf("| 7 5 6 | 3 8 4 | 2 1 9 |\n");
    printf("-------------------------\n");
    printf("| 6 4 3 | 0 5 8 | 7 9 2 |\n");
    printf("| 5 2 1 | 7 9 3 | 8 4 6 |\n");
    printf("| 9 8 7 | 4 2 6 | 5 3 0 |\n");
    printf("-------------------------\n");
    printf("| 2 1 4 | 9 3 5 | 6 8 7 |\n");
    printf("| 3 6 5 | 8 1 7 | 9 2 4 |\n");
    printf("| 8 7 0 | 6 4 2 | 0 5 3 |\n");

    FILE *arquivo = fopen("input2.txt", "r");  

    if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    return 1;
    }

for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
        fscanf(arquivo, "%d", &sudoku[i][j]);
    }
}


    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            if (sudoku[i][j] == 0){
                printf("Digite o valor que voce acha que esta na casa [%d][%d] é", i, j);

                scanf ("%d", &troca);

                sudoku[i][j] = troca;
            }
        }
    }

        if (deucerto(sudoku))
            printf("AEEEEEE\n\n");
        else
            printf("ERROUUUU!\n\n");


    return 0;

}
