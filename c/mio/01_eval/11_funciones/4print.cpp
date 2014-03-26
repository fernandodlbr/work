#include <stdio_ext.h>
#include <stdlib.h>

void print(const char *letra){
  if(*letra==0)
    return;

  printf("%c", *letra == 'o' ? '0' : *letra);
  print(letra+1);
}

int main(int argc, char *argv[]){

  const char *frase = "dabale arrozalazorraelabad.";

  print(frase);
  printf("\n");

  return EXIT_SUCCESS;
}
