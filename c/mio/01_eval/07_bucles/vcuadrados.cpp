#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  /* int lado = atoi(argv[1]);*/

  int lado;
  printf("Introduce un numero: ");
  scanf(" %i", &lado);

  for(int cuadrado=0; cuadrado<lado; cuadrado++)

    for(int filas=0; filas<lado; filas+=1){

      for(int columnas=0; columnas<lado; columnas+=1){

	if(cuadrado % 2 == 0)
	  printf("*");
	else
	  printf("-");
      }
      printf("\n");
    }

  return EXIT_SUCCESS;
}
