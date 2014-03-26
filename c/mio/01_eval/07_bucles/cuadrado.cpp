#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int lado = atoi(argv[1]);

  /* o tambien
     int lado;
     printf("Introduce un numero: ");
     scanf(" %i", &lado); */

  for(int filas=0; filas<lado; filas+=1){

    for(int columnas=0; columnas<lado; columnas+=1){

      if(filas == 0 || columnas == 0  || filas == lado-1 ||
	  columnas == lado-1)
	printf("*");
      else
	printf(" ");
    }
    printf("\n");          
  }  

  return EXIT_SUCCESS;
}
