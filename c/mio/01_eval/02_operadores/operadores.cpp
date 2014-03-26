#include <stdio.h>
#include <stdlib.h>
#define N_ALUMNOS 6

  int main(){

  double nota,
         media = 0;

 for(int numero_de_alumno=0;numero_de_alumno<N_ALUMNOS;numero_de_alumno+=1){

    printf("nota ");

    scanf(" %lf", &nota);

    media +=nota;
}

   media/= N_ALUMNOS;

   printf("media: %.2lf\n", media);

   return EXIT_SUCCESS;
}
