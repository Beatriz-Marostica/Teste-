#include <stdio.h>

int main (void){
   int termo=30, i, j=0, proximo, segundo = 1, cont=0, valor;
   int vetor[100];

   printf ("--------------------\n");
   printf ("SERIE DE FIBONACCI\n");
   printf ("--------------------\n");

   printf ("Digite um valor: ");
   scanf ("%d", &valor);

   for (i = 1; cont < termo; i++){
        if (cont == 0){
            printf ("\n0\t1\t");
            vetor[j] = cont;
            j++;
        }
        printf ("%d\t ", i);
        vetor[j] = i;
        j++;
        proximo = i + segundo;
        i = segundo;
        segundo = proximo;
        cont++;
   }

   printf ("\n");
   cont=0;
   for (i=0; i < j; i++){
       if (valor == vetor[i]){
           cont++;
       }
   }

   if (cont == 0){
       printf ("\nO numero %d nao pertence a sequencia de Fbonacci\n", valor);
   }
   else {
       printf ("\nO numero %d pertence a sequencia de Fbonacci\n", valor);
   }

   return 0;
}

