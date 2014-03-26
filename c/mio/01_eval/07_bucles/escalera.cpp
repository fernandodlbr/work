#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int lado = atoi(argv[1]);

  for(int cubo=0; cubo<lado; cubo++)
    for(int fila=0; fila<lado; fila++){
      for(int cuadrado=0; cuadrado<lado; cuadrado++) 
	for(int col=0; col<lado; col++)
	  if(col==0||col==lado-1 )
	    printf("*");
	  else
	    printf("-");
      printf("\n");
    }
  return EXIT_SUCCESS;
}
