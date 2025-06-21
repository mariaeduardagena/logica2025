#include <stdio.h>
#include <string.h>

int main() {
    int N, D, i, len;
    char str[1001]; 

    scanf("%d", &N);

    while(N--) {
        scanf("%s", str);
        scanf("%d", &D); 

        len = strlen(str);

        for(i = 0; i < len; i++) {
            str[i] = ((str[i] - 'A' - D + 26) % 26) + 'A';
        }

        printf("%s\n", str); 
    }

    return 0;
}
