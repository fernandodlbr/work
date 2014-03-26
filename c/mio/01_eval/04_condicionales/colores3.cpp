#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char rojo, amarillo, verde;

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
    printf("Verde (s/n)");
    scanf(" %c", &verde);
    if(verde < 'a')
      verde += ('a' - 'A');
  }while(verde != 's' && verde != 'n');



  printf ("Estás viendo ");
  if(rojo == 's')
    if (amarillo == 's')
      printf("Naranja");
    else
      printf("Rojo");
  else
    if(amarillo == 's')
      printf("Amarillo");
    else
      printf("Negro");

  if(verde == 's')
    if(amarillo == 's')
      printf("Azul");
    else 
      printf("Verde");
  if(verde == 's')
    if(rojo == 's')
      printf("Morado");
  if(verde == 's')
    if(amarillo == 's')
      if(rojo == 's')
	printf("Blanco");


  printf("\n");

  return EXIT_SUCCESS;
}
