#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void faturamento (int vetor[], int tam, int limInf, int limSup){
   int i;

   srand (time(NULL));

   for (i=0; i < tam; i++){
       vetor[i] = (rand() % ((limSup - limInf) + 1)) + limInf;
   }
}


void mostrarVet (int vetor[], int tam){
   int i;

   for (i=0; i < tam; i++){
        printf ("R$ %d\n", vetor[i]);
   }
}


void maiorEmenor (int vetor[], int tam){
  int i, maior=0, menor=0;


    for (i=0; i < tam; i++){
        if (i == 0){
            menor = vetor[i];
        }

        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf ("\n\nO menor faturamento foi de R$ %d ", menor);

    for (i=0; i < tam; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf ("\nO maior faturamento foi de R$ %d\n", maior);
}


void media (int vetor[], int tam){
  int i, soma=0, cont=0;
  float media=0;

  for (i=0; i < tam; i++){
      soma = soma + vetor[i];
      cont++;
  }

  media = soma / cont;
  printf ("\n\nMedia: %.2f\n", media);

  cont=0;
  for (i=0; i < tam; i++){
      if (vetor[i] > media){
          cont++;
      }
  }
  printf ("\nHouve %d dias que o valor do faturamento ultrapassou o valor da media mensal\n", cont);
}


int main (void){
    int tam = 21, limInf = 1000, limSup = 10000;
    int vetor[tam];

    printf ("FATURAMENTO DIARIO (SEM CONTAR OS FINAIS DE SEMANA):\n");
    faturamento (vetor, tam, limInf, limSup);
    mostrarVet (vetor, tam);

    maiorEmenor (vetor, tam);
    media (vetor, tam);

   return 0;
}
