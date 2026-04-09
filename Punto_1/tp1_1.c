/*  Declare un puntero en el procedimiento principal que apunte a una variable 
de algún tipo y muestre por pantalla lo siguiente: 
1) El contenido del puntero 
2) La dirección de memoria almacenada por el puntero.  
3) la dirección de memoria de la variable. 
4) la dirección  de memoria del puntero. 
5) el tamaño de memoria utilizado por esa variable usando la función 
sizeof()  */

#include <stdio.h>

int main(){

int a = 5;

int *punt = &a; 

printf("\n El contenido del puntero: %d", *punt);
printf("\n La direccion de memoria almacenada por el puntero: %p", punt);
printf("\n La direccion de memoria de la variable: %p", &a);
printf("\n La direccion de memoria del puntero: %p", &punt);
printf("\n El tamaño de memoria utilizado: %p", sizeof(a));


return 0;
}
