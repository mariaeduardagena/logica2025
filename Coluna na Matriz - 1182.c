#include <stdio.h>
 
int main() {
 int coluna, i, j;
 char operacao;
 double matriz[12][12], soma = 0.0;
    
 scanf("%d", &coluna);
 getchar(); 
 scanf("%c", &operacao);
 
 for (i = 0; i < 12; i++) {
  for (j = 0; j < 12; j++) {
   scanf("%lf", &matriz[i][j]);
        }
    }
    
 for (i = 0; i < 12; i++) {
  soma += matriz[i][coluna];
    }
    
 if (operacao == 'S') {
  printf("%.1lf\n", soma);
    } else if (operacao == 'M') {
  printf("%.1lf\n", soma / 12.0);
    }
 return 0;
}
