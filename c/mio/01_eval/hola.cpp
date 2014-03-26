#include <stdio_ext.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int numero;

    printf("Introduce numero de veces: ");
    scanf("%i", &numero);

    for (int hola=0; hola<numero; hola++){
	printf("\n");
	for (int col=0; col<numero; col++)
	    if(hola>=col)
		printf("%i ", col);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
