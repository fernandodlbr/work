#include <stdio_ext.h>
#include <stdlib.h>

#define MAX 10

int main(int argc, char *argv[]){

  // fibo 1,1,3,5,8,13,21

  //  int MAX=0;
  int array[MAX] = {0,1};

  //  scanf("%i", &MAX);

  // suma y rellena  el array

  for(int cont=2; cont<MAX; cont++)
    array[cont] = array[cont-1] + array[cont-2];

  // imprime el array

  for(int cont=0; cont<MAX; cont++)
    printf("%i ",array[cont]);

  printf("\n");

  return EXIT_SUCCESS;
}
