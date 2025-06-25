#include <stdio.h>
 
int main() {
    int i, j;
    double matriz[12][12];
    double soma = 0.0;
    char operacao;

    scanf(" %c", &operacao);
    
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]); 
        }
    }

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            if (j > i) {
                soma += matriz[i][j];
            }
        }
    }

    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } else if (operacao == 'M') {
        printf("%.1lf\n", soma / 66.0);
    }
    
    return 0;
}
