#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char linha[1001], resultado[1001];

    scanf("%d%*c", &N);

    while (N--) {
        fgets(linha, sizeof(linha), stdin);

        int len = strlen(linha);
        if (linha[len - 1] == '\n') linha[--len] = '\0';

        for (int i = 0; i < len; i++) {
            if ((linha[i] >= 'A' && linha[i] <= 'Z') || (linha[i] >= 'a' && linha[i] <= 'z'))
                resultado[i] = linha[i] + 3;
            else
                resultado[i] = linha[i];
        }

        for (int i = 0; i < len / 2; i++) {
            char temp = resultado[i];
            resultado[i] = resultado[len - 1 - i];
            resultado[len - 1 - i] = temp;
        }

        for (int i = len / 2; i < len; i++) {
            resultado[i] -= 1;
        }

        resultado[len] = '\0'; 
        printf("%s\n", resultado);
    }

    return 0;
}
