#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int a[32];
  char nombre[32] = "pablo";
  int b[7] = {7, 6, 5, 4, 3, 2, 1};

  a[0] = 27;
  a[3] = 25;
  a[9] = 2;

  printf("%p: \n", a);

  printf("%i - %i = %i\n", a[0], a[9], a[0] - a[9]);

  printf("%i + %i = %i\n", a[0], a[3], a[0] + a[3]);

  return EXIT_SUCCESS;
}
