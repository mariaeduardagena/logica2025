#include <stdio.h>
 
int main() {
 int i, pos=0, N, menor; 
 scanf("%d", &N);
 int x[N];
 
 for(i=0; i<N; i++){
     scanf ("%d", &x[i]);
     menor = x[0];
 }
 
 for(i = 1; i < N; i++){
     if (menor > x[i]){
         menor = x[i];
         pos = i;
     }
 }
 printf ("Menor valor: %d\nPosicao: %d\n", menor, pos);
 
 
    return 0;
}
