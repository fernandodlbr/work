#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int lado = atoi(argv[1]);

  for(int fila_de_cuad=0; fila_de_cuad<lado;fila_de_cuad++){
    for(int col_de_cuad=0; col_de_cuad<lado;col_de_cuad++)
      for(int col=0;col<lado;col++)
	if(fila_de_cuad == col && col_de_cuad %2==0 ||
	    col == lado - fila_de_cuad -1 && col_de_cuad %2 ==1)
	  printf("*");
	else
	  printf("-");
    printf("\n");
  }
  return EXIT_SUCCESS;
}
