#include <stdio_ext.h>
#include <stdlib.h>

#define TOPE 10000

/* Mirar si es perfecto el numero */
bool es_perfecto(int numero){
  int suma_de_divisores = 0;
  int divisor = numero / 2;
  /* Compara los numeros para buscar el perfecto*/
  for(int posible_divisor=1; posible_divisor<=divisor;posible_divisor++)

    if(numero % posible_divisor == 0)
      suma_de_divisores += posible_divisor;

  return suma_de_divisores == numero;/* Da el resultado */
}

int main(int argc, char *argv[]){
  int tope = TOPE;

  if(argc > 1)
    tope = atoi(argv[1]);

  /* Cuenta los numeros hasta el 10000 */
  for(int i=2; i<tope; i++)
    if(es_perfecto(i))
      printf("%i ", i);
  printf("\n");

  return EXIT_SUCCESS;
}
