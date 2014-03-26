#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define NMAX 010

enum TipoOpcion {crear=1, abrir, guardar, salir};

void titulo(){ //Las funciones que devuelven nada se llaman procedimientos
  system("clear");
  system("figlet SopaDeLetras");
}
 
 enum TipoOpcion leer_menu(){
  int opcion;

  do{ //menu
    titulo(); //Invocar a la funcion titulo
    printf(   
         "\n\n\tElige una opción: \n\n"
         "\t\t1.- Crear una sopa. \n"
         "\t\t2.- Abrir una sopa. \n"
         "\t\t3.- Guardar una sopa. \n"
         "\t\t4.- Salir. \n"
         "\n\tTu Opción: "
        );
    __fpurge(stdin); // elimina los caracteres no validos 
    scanf(" %i", &opcion); 
  }while(opcion<1 || opcion>3);
 
  return (enum TipoOpcion) opcion;
}

void rellenar(char matriz[NMAX][NMAX]){ //hacer cuadricula en memoria
   for (int fila=0; fila<NMAX; fila++)
       for(int col=0; col<NMAX; col++)
            matriz[fila][col] = (char) (rand() % ('z' - 'a') + 'a');
 }

void escribir(FILE *salida, char matriz[NMAX][NMAX]){ //hacer cuadricula en 
                                                      //memoria
 for (int fila=0; fila<NMAX; fila++){
   fprintf(salida, "\t");   
   for(int col=0; col<NMAX; col++)
       fprintf(salida, " %c", matriz[fila][col]); // imprimir caracteres 
                                                  // de sopa de letras
     fprintf(salida, "\n");   
 }
}

void pintar(char matriz[NMAX][NMAX]){
    escribir(stdout, matriz);
}

int main(int argc, char *argv[]){

  /*crear sopa
  menu inicial
    -crear nueva
    -abrir sopa
    -diferentes tamaños
    -guardar sopa
  */

 char sopa[NMAX][NMAX]; //pone los aleatorios aqui

 srand(time(NULL)); //semilla de aleatorio coje el tiempo de inicio

 fichero = fopen("guardar.txt", "w"); //nombre del archivo donde se guarda
 
  switch(leer_menu()){
    case crear:
      rellenar(sopa);
      pintar(sopa);
      break;
    case abrir:
      break;
    case guardar:
      escribir(fichero, sopa);
      break;
    case salir:
      return EXIT_SUCCESS;
      break;
  }
  
  fclose(fichero);
  return EXIT_SUCCESS;
}
