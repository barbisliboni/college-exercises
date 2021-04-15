#include <stdio.h>
#include <stdlib.h>


main() {
int i, multi, Vetor_A[15], Vetor_B[15];
for (i = 0; i < 15; i++) {
    
    printf ("Digite os valores do vetor A %d: ", i+1);
    scanf ("%d", &Vetor_A[i]);
   }
    

    for(i = 0; i < 15; i++) {
    multi = Vetor_A[i] * Vetor_A[i];
    Vetor_B[i] = multi;
    printf("Valores do vetor B:%d \n", Vetor_B[i]);
    }
    
       
    system("Pause");
    
}
