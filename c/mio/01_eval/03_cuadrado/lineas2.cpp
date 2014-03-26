#include <stdio.h>
#include <stdlib.h>

#define punto 5

  int main(){
  
   char letra;
printf("\n Pon una letra mamon: ");

scanf("%c", &letra);

  for(int linea=0;linea<punto;linea+=1){

    for(int columna=0;columna<punto;columna+=1){

   printf("%c", letra, letra);
  }
  printf("\n");
 }

return EXIT_SUCCESS;
}
