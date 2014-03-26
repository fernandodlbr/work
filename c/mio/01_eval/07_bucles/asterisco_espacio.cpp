#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int asterisco = atoi(argv[1]);

  /* o tambien
     int asterisco;
     printf("Introduce un numero: ");
     scanf(" %i", &asterisco); */

  for(int filas=0; filas<asterisco; filas+=1){

    for(int columnas=0; columnas<asterisco; columnas+=1){

      if(filas == 0 || filas == asterisco-1 )
	printf("*");
      else
	printf(" ");
  }
    printf("\n");          
  } 
  return EXIT_SUCCESS;
}
