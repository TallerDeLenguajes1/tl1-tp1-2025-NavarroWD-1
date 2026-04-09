/* 5. Genere en el repositorio un archivo que se llame tp1_2.c y resuelva las 
siguientes tareas mediante el uso de funciones: 
a) Haga una función que devuelva el cuadrado de un número 
b) Haga la función anterior, pero devolviendo un tipo void 
c) Al recibir una variable muestre por pantalla la dirección y el contenido de 
la variable  
d) Dado dos parámetros de entrada, deberá invertir los valores entre 
ambos.   
void Invertir(a,b)  //deberá devolver en el valor de a en la 
variable b, y en el valor de b el valor de a  
e) Dado dos parámetros de entrada, deberá devolverlos de forma 
ordenada, en el primer parámetro el menor y en el segundo el mayor. 
void orden(a,b)  //deberá devolver en el valor de a el valor más 
chico, y en el valor de b el valor más grande 
f) 
Utilice las funciones anteriores para leer pares de valores e imprimirlos 
por pantalla. 
g) Al finalizar, debe subir todos los cambios al repositorio, usando los 
siguientes comandos. 
i. git add . 
ii. git commit -m “ejercicio 2.4 completado” 
iii. git push */

#include <stdio.h>

int f_cuadrado1(int num){
    num = num*num;
    return num;
}

void f_cuadrado(int *num){
    *num = *num * (*num);
}

void muestra(int num){
    printf("\n La direccion de la variable: %p", &num);
    printf("\n El contenido de la variable: %d", num);
}

void f_invertir(int *b, int *c){
    int aux = *b;
    *b = *c;
    *c = aux;
}

void f_ordenar(int *d, int *e){
    int aux;
    if(*d == *e){
        printf("\n Son iguales.");
    }else if(*d>*e){
        return;
    }else{
        aux = *d;
        *d = *e;
        *e = aux;
    }
}

int main (){
    int a;
    printf("\n Ingrese numero para elevar al cuadrado: ");
    scanf("%d", &a);
    f_cuadrado(&a);
    printf("\n El cuadrado del numero: %d", a);

    int b, c, d, e;
    printf("\n Ingrese dos valores de entrada: ");
    scanf("%d %d", &b, &c);
    f_invertir(&b, &c);
    printf("\n Los valores invertidos: %d // %d", b, c);
    printf("\n Ingrese dos valores: ");
    scanf("%d %d", &d, &e);
    f_ordenar(&d, &e);
    printf("\n El mayor: %d, el menor: %d", d, e);

    return 0;
}