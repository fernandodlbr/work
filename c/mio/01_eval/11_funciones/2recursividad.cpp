#include <stdio_ext.h>
#include <stdlib.h>

int suma(int desde){
  if(desde==0)
    return 0;
  return desde + suma (desde-1);
}

int main(int argc, char *argv[]){

  int n = atoi(argv[1]);
  if(argc<2)
    return EXIT_FAILURE;

  printf("%i\n",suma(n));
  printf("\n");

  return EXIT_SUCCESS;
}
