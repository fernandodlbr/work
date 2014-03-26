#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char rojo, amarillo, azul;

  do{
    printf("Rojo (s/n): ");
    scanf(" %c", &rojo);
    if (rojo < 'a')
      rojo += ('a' - 'A');
  }while(rojo != 's' && rojo != 'n');	
  /* !(rojo == 's' || rojo == 'n') */	

  do{
    printf("Amarillo (s/n): ");
    scanf(" %c", &amarillo);
    if(amarillo < 'a')
      amarillo += ('a' - 'A');
  }while(amarillo != 's' && amarillo != 'n');

  do{
    printf("Azul (s/n): ");
    scanf(" %c", &azul);
    if(azul < 'a')
      azul += ('a' - 'A');
  }while(azul != 's' && azul != 'n');

  printf ("Estás viendo ");                        

  if(rojo == 's')

    if(amarillo =='s')

      if(azul == 's')
	printf("blanco");

      else
	printf("naranja");
    else
      if(azul == 's')
	printf("morado");
      else
	printf("rojo");
  else

    if(amarillo == 's')

      if(azul == 's')
	printf("verde");

      else
	printf("amarillo");

    else
      if(azul == 's')
	printf("azul");
      else
	printf("negro");

  printf("\n");

  return EXIT_SUCCESS;
}
