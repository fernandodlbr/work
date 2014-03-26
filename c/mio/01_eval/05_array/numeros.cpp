#include <stdio.h>
#include <stdlib.h>

#define MAXNUM 10

int main(int argc, char *argv[]){

  int sucesion[MAXNUM];

  //Rellenar la matriz sucesion
  for (int i=0; i<MAXNUM; i++)
    sucesion[i] = i + 1;

  //Imprimir la matriz sucesion
  for(int i=0; i<MAXNUM; i++)
    printf("%i ", sucesion[i]);

  printf("\n");

  return EXIT_SUCCESS;
}
