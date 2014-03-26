#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int lado = atoi(argv[1]);
    
/* Lado izq de Col
   col==0&&fila!=1 ||
   col==2&&fila!=1&&fila!=lado-2&&fila!=3 ||
   col==4&&fila!=1&&fila!=lado-2&&fila!=3&&fila!=lado-4&&fila!=5 ||
   col==6&&fila!=1&&fila!=lado-2&&fila!=3&&fila!=lado-4 &&fila!=5&&fila!=lado-6&&fila!=7 */

/* Lado arriba de fila
   fila==0||
   fila==2&&col!=lado-2 ||
   fila==4&&col!=1 &&col!=lado-2&&col!=lado-4 || */

/* Lado der de col
   col==lado-1||
   col==lado-3&&fila!=1&&fila!=lado-2 ||
   col==lado-5&&fila!=1&&fila!=lado-2&&fila!=3&&fila!=lado-4 ||
   col==lado-7&&fila!=1&&fila!=lado-2&&fila!=3&&fila!=lado-4&&fila!=5&&fila!=lado-6|| */

/* Lado abajo de fila
   fila==lado-1||
   fila==lado-3&&col!=lado-2&&col!=1 ||
   fila==lado-5&&col!=lado-2&&col!=1&&col!=lado-4&&col!=3 ||
   fila==lado-7&&col!=lado-2&&col!=1&&col!=lado-4&&col!=3&&col!=lado-6&&col!=5|| */

    for(int fila=0; fila<lado; fila++){
	for(int col=0; col<lado; col++)
	    if(fila==0 || col==lado-1 || fila==lado-1 || col==0&&fila!=1 ||
		    fila==2&&col!=lado-2 ||col==lado-3&&fila!=1&&
		    fila!=lado-2 || fila==lado-3&&col!=lado-2&&col!=1 ||
		    col==2&&fila!=1&&fila!=lado-2&&fila!=3 ||fila==4&&col!=1
		    &&col!=lado-2&&col!=lado-4 ||col==lado-5&&fila!=1&&
		    fila!=lado-2&&fila!=3&&fila!=lado-4 ||fila==lado-5
		    &&col!=lado-2&&col!=1&&col!=lado-4&&col!=3 ||
		    col==4&&fila!=1&&fila!=lado-2&&fila!=3&&fila!=lado-4
		    &&fila!=5)
		printf("*");
	    else
		printf(" ");

	printf("\n");
    }	
    return EXIT_SUCCESS;
}
