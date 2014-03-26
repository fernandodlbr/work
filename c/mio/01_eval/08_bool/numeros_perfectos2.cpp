#include <stdio_ext.h>
#include <stdlib.h>

bool es_perfecto(int posible_perfecto){
  int suma_de_divisores = 0;

  for (int posible_divisor=1;posible_divisor<=posible_perfecto/2;
      posible_divisor++)
    if(posible_perfecto % posible_divisor == 0)
      suma_de_divisores += posible_divisor;
}

int main(int argc, char *argv[]){

  int posible_perfecto,
      suma_de_divisores = 0;

  if(argc<2){
    fprintf(stderr, "Usage: %s <numero entero>\n", argv[0]);
    return EXIT_FAILURE;
  }

  posible_perfecto = atoi(argv[1]);

  if(es_perfecto(posible_perfecto))
    printf("%i es perfecto.\n", posible_perfecto);
  else
    printf("%i no es perfecto.\n", posible_perfecto);

  return EXIT_SUCCESS;
}
