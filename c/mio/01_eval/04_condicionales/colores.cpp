#include <stdio.h>
#include <stdlib.h>

int main(){

   char amarillo,
        rojo;

printf("es rojo?\n");

scanf(" %c", &rojo);

printf("es amarillo?\n");

scanf(" %c", &amarillo);

// si ves rojo y no ves amarillo, ves rojo

if(rojo == 's' && amarillo == 'n')

printf("es rojo \n");

//si ves amarillo y no ves rojo, ves amarillo

if(amarillo == 's' && rojo == 'n')

printf("es amarillo\n");

//si no ves rojo ni amarillo, es negro

if(amarillo == 'n' && rojo == 'n')

printf("es negro\n");

//si ves rojo y amarillo, es naranja

if(rojo == 's' && amarillo == 's')

printf("es naranja\n");

return EXIT_SUCCESS;
}
