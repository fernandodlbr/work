#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int lado = atoi(argv[1]);

  /* o tambien
     int lado;
     printf("Introduce un numero: ");
     scanf(" %i", &lado); */

  for(int filas=0; filas<lado; filas+=1){

    for(int columnas=0; columnas<lado; columnas+=1)

      if(filas >= columnas)
	printf("*");

      else
	printf(" ");

    /* for(int filas=1; filas<lado+1; filas+=1){

       for(int columnas=0; columnas<filas; columnas+=1)

       printf("*"); */

    printf("\n");
  }  

  return EXIT_SUCCESS;
  }
