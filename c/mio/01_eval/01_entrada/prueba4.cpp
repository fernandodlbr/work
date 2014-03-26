#include <stdio.h>
#include <stdlib.h>

int main(){
  char letra;

  printf("\n\n introduce un caracter: ");
  // Leer caracter
  scanf(" %c", &letra);

  //Imprimir el caracter y el codigo ASCII
  printf("%d: %X\n", letra ,letra);
return EXIT_SUCCESS;
}

