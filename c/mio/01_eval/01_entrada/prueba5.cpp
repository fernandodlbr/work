#include <stdio.h>
#include <stdlib.h>

int main(){
  char letra;

  printf("\n\n introduce un caracter: ");
  // Leer caracter
  scanf(" %X", &letra);

  //Imprimir el caracter y el codigo ASCII
  printf("%c: %d\n", letra ,letra);
return EXIT_SUCCESS;
}

