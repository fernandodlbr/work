#include <stdio.h>
#include <stdlib.h>

#define linea 1
#define punto 3

  int main(){
  
  for(int numero_de_lineas=0;numero_de_lineas<linea;numero_de_lineas+=1){
  
  printf("*****\n");

    for(int numero_de_puntos=0;numero_de_puntos<punto;numero_de_puntos+=1){
   
    printf("*   *\n");
  }
  printf("*****\n");

 }
  
  return EXIT_SUCCESS;

}
