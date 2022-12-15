#include<stdio.h>
int opc, i, k=1;
struct mascota{
  char nombre [15];
  int edadmeses;
  struct propietario{
  char nombrepropietario[10];
  int direccion;
  float peso;
}propietario[2];
}mascota[2];

//Prototipo
void Menu();
void ingresar();
void mostrar();
void salir();

main(){
  Menu();
  return 0;
}
//Definicion
void ingresar(){
  for(i=0;i<2;i++){
    fflush(stdin);
    printf("Ingresa el Nombre de la mascota %d: \n", i+1);
        gets(mascota[i].nombre);
        fflush(stdin);
        printf("Ingresa la edad de la mascota %d: \n ", i+1);
        scanf("%d", &mascota[i].edadmeses);
        fflush(stdin);
        printf("Ingresa el nombre del propietario %d: \n ", i+1);
        gets(mascota[i].propietario[i].nombrepropietario);
        fflush(stdin);
        printf("Ingresa la direccion %d: \n", i+1);
        scanf("%d", &mascota[i].propietario[i].direccion);
        fflush(stdin);
        printf("Ingresa el peso de la mascota %d: \n", i+1);
        scanf("%f", &mascota[i].propietario[i].peso); 
        fflush(stdin);
}
}
void mostrar(){
  for(i=0;i<2;i++){
  fflush(stdin);
    printf("El nombre de la mascota  %d es: %s", i+1, mascota[i].nombre);
    fflush(stdin);
    printf("\nLa edad de la mascota %s es: %d", mascota[i].nombre, mascota[i].edadmeses);
    fflush(stdin);
    printf("\nEl nombre del propietario %s es: %s", mascota[i].nombre, mascota[i].propietario[i].nombrepropietario);
    fflush(stdin);
    printf("\nLa direccion de %s es: %d", mascota[i].propietario[i].nombrepropietario, mascota[i].nombre, i+1, mascota[i].propietario[i].direccion);
    fflush(stdin);
    printf("\nEl peso de la mascota %s es: %f", mascota[i].propietario[i].nombrepropietario, mascota[i].nombre, mascota[i].propietario[i].peso);
    fflush(stdin);
}
}
void salir(){
  k--;
}

void Menu(){
  do{
  printf(" 1. Ingresar datos.\n 2. Mostrar Datos.\n 3. Salir.\n Que opcion desea usar: ");
  scanf("%d", &opc);
  if(opc>3 || opc<1){
    printf("\nOpcion invalida\n");
    printf("_______________\n \n");
  }else{
  
  switch(opc){
    case 1: 
    ingresar();
  break;
      case 2:
        mostrar();
  break;
  case 3:
    salir();
    break;
}
}
}while(k);
}