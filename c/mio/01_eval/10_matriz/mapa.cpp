#include <stdio_ext.h>
#include <stdlib.h>

#define N 3
#define M 4
/*cuando las col del 1º son las mismas que las filas del 2º se pueden
  multiplicar*/
int main(int argc, char *argv[]){
    int matriz[N][M];

	for (int fila=0; fila<N; fila++){
	    for (int col=0; col<M; col++) 
		printf(" %i", matriz[fila][col]);
	    printf("\n");
	}
    return EXIT_SUCCESS;
}
