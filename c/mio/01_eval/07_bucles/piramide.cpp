#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int lado = atoi(argv[1]);

  /* o tambien
     int lado;
     printf("Introduce un numero: ");
     scanf(" %i", &lado); */

  for(int filas=0; filas<lado; filas+=1){
    /*Sirve para dar otra columna mas*/	
    for(int columnas=0; columnas<lado*2; columnas+=1){
      /*corta el der*/               /*corta el izq*/
      if(columnas < lado - filas-1|| filas + lado < columnas)

	printf(" ");

      else
	printf("*");
    }
    printf("\n");          
  } 

  return EXIT_SUCCESS;
}
