#include <stdio.h>

int main (void){
   int i;
   float soma=0, total=0;
   float vetor[5] = {67836.43, 36678.66, 29229.88,27165.48, 19849.53};

   for (i=0; i < 5; i++){
       soma = soma + vetor[i];
   }

   printf ("Valor total a dsitribuidora: R$%.2f ", soma);

   printf ("\n\nPercentual de representacao por estado:\n\n");
   for (i=0; i < 5; i++){
       vetor[i] = vetor[i] * 100;
       total = vetor[i] / soma;
       if (vetor[i] == vetor[0]){
       printf ("SP: %.2f%%\n", total);
       }
       else if (vetor[i] == vetor[1]){
       printf ("RJ: %.2f%%\n", total);
       }
       else if (vetor[i] == vetor[2]){
       printf ("MG: %.2f%%\n", total);
       }
       else if (vetor[i] == vetor[3]){
       printf ("ES: %.2f%% \n", total);
       }
       else if (vetor[i] == vetor[4]){
       printf ("Outros: %.2f%%\n", total);
       }
   }



   return 0;
}
