#include <stdio.h>

void f_invertir(int *p) {
    int aux = *p;
    int invertido = 0;
    while (aux > 0) {
        invertido = (invertido * 10) + (aux % 10); // le saca el resto y lo invierte luego del primer while
        aux = aux / 10; // achica el numero 
    }
    *p = invertido; // devuelve el valor invertido que haya ingresado en p
}

void f_mitad(int *p) {
    *p = *p / 2;  // toma el valor que viene de la funcion alpha y lo divide en 2
}

void f_sumaDigitos(int *p) {
    int aux = *p; // guardo el valor de p
    int suma = 0; 
    while (aux > 0) {
        suma = suma + (aux % 10); // sumo en 'suma' el resto/residuo de aux
        aux = aux / 10; // achico aux
    }
    *p = *p + suma; // le sumo a p el valor que obtuve en suma, que seria la suma de los digitos de mi numero
}

void procesar_enigma(int *valor_referencia) {
    f_invertir(valor_referencia);
    f_mitad(valor_referencia);
    f_sumaDigitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}

// Es una funcion que me permite ingresar o leer un numero para primero invertirlo, luego dividirlo en 2 y al final sumarle la suma de sus digitos para devolver el numero invertido dividido y sumado.