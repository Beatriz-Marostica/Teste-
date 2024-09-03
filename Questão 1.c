#include <stdio.h>

int main (void){
   int INDICE=13, SOMA=0, k=0;

   for (k=0; k < INDICE; k++){
        k = k + 1;
        SOMA = SOMA + k;
   }

   printf ("Soma: %d\n", SOMA);

   return 0;
}
