#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int lado;

  if (argc<2){
    fprintf(stderr, "Usage: %s <lado>", argv[0]);
    return EXIT_FAILURE;
  }

  lado = atoi(argv[1]);

  //pintar 'lado' filas de cuadrados
  for(int fila_de_cuadrados=0;fila_de_cuadrados<lado;fila_de_cuadrados++)

    //pintar 'lado' filas
    for(int fila=0; fila<lado;fila++){

      //pintar ' lado' columnas de cuadrados
      for(int col_de_cuadrados=0;col_de_cuadrados<lado;col_de_cuadrados++)

	//pintar 'lado' columnas
	for(int col=0;col<lado;col++)
	  // si la fila_de_cuadrados + col_de_cuadrados es par
	  if((fila_de_cuadrados + col_de_cuadrados)%2==0)

	    //pinto un '*'
	    printf("*");
      //sino
	  else 	

	    // pinto un '-'
	    printf("-");

      // pintar salto
      printf("\n");
    }
  return EXIT_SUCCESS;
}
