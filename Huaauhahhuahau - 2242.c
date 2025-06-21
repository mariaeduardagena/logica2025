#include <stdio.h>
#include <string.h>

int main() {
    char str[51], vogais[51];
    int i, j = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            vogais[j++] = str[i];
        }
    }
    vogais[j] = '\0'; 

    int eh_palindromo = 1;
    for(i = 0, j = strlen(vogais) - 1; i < j; i++, j--) {
        if(vogais[i] != vogais[j]) {
            eh_palindromo = 0;
            break;
        }
    }

    if(eh_palindromo)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
