# tp1
* codigo_misterio: 
Es una funcion que me permite ingresar o leer un numero para primero invertirlo, luego dividirlo en 2 y al final sumarle la suma de sus digitos para devolver el numero invertido dividido y sumado.
El nombre elegido de mis variables es justamente lo que hacen, invertir, dividir (mitad) y luego sumarDigitos.
Las demas funciones no las renombre porque no lo considere necesario.

* codigo_sin_funcionar: 

Los errores que encontre fueron que faltaban ;, tambien operadores & y %, faltaba definir librerias, y en la declaracion e invocacion de funcion encontre errores relacionados al pasaje de parametros, se intentaba pasar un valor y devolverlo multiplicado pero la variable fue pasada por valor y no se modificaba nunca en el codigo main, lo solucione utilizando notacion tipica de punteros para hacer pasaje por referencia, utilizando un & en la invocacion de funcion y * en la declaracion de funcion para modificar el valor original de la variable para poder devolverla multiplicada.