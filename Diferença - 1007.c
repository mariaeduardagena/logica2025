#include <stdio.h>
 
int main() {
    int a, b, c, d, diferenca = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    diferenca = (a*b - c*d);
    
    printf("DIFERENCA = %d\n", diferenca);
    return 0;
}
