#include <stdio_ext.h>
#include <stdlib.h>

#define MAX 020
 
/*Usa matrices
sumar al numero el anterior
1,1,2,3,5,8,13
fn = fn-1 + fn-2*/

void muestra(int lista[MAX]){
  for (int cadena=0; cadena<MAX; ++cadena)
    printf("%i ", lista[cadena]);
  printf("\n");
}

void calcula(int fibonacci[MAX]){
  if(MAX<1)
    return;
  fibonacci[0] = 1;

  if(MAX<2)
    return;
  fibonacci[1] = 1;

  for(int suma=2; suma<MAX; suma++)
    fibonacci[suma] = fibonacci[suma-1] + fibonacci[suma-2];
}

int main(int argc, char *argv[]){

  int fibonacci[MAX];

  calcula(fibonacci);

  muestra(fibonacci);

  return EXIT_SUCCESS;
}
