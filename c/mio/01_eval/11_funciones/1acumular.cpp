#include <stdio_ext.h>
#include <stdlib.h>

/* hace una suma a la variable le añade el int de cantidad */
void acumula(int *variable, int cantidad){
  *variable += cantidad;
}

int main(int argc, char *argv[]){

  int a = 2,
      b = 3,
      c = 5;
/* cambia suma a la variable el valor de la cantidad asi cambia */
  acumula (&a, b);
  acumula (&b, c);
  acumula (&c, a);

  printf("a=%i, b=%i, c=%i", a, b, c);

  printf("\n");

  return EXIT_SUCCESS;
}
