#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N, i, maxFreq, j;
    char str[201]; 
    int freq[26];  

    scanf("%d\n", &N);

    while(N--) {
        fgets(str, 201, stdin);
        int len = strlen(str);
        
        for(i = 0; i < 26; i++) freq[i] = 0;

       
        for(i = 0; i < len; i++) {
            if(isalpha(str[i])) {
                char lower = tolower(str[i]); 
                freq[lower - 'a']++;          
            }
        }

        maxFreq = 0;
        for(i = 0; i < 26; i++) {
            if(freq[i] > maxFreq)
                maxFreq = freq[i];
        }

        for(i = 0; i < 26; i++) {
            if(freq[i] == maxFreq)
                printf("%c", i + 'a');
        }
        printf("\n");
    }

    return 0;
}
