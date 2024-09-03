#include <stdio.h>

int main (void){
   int i=0, j=0, tam=0, aux=0;
   char string[100];

   printf ("Informe uma string: ");
   gets (string);

   while (string[tam] != '\0'){
      tam++;
   }

    j = tam - 1;
    while (i < j){
       aux = string[i];
       string[i] = string[j];
       string[j] = aux;
       i++;
       j--;
   }

   printf ("\nString invetida: %s", string);

   return 0;
}
