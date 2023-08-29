# ACT-1.1-Estructura-de-datos.-

Realiza una aplicación en C++ que calculé la sumatora de 1 hasta n y llame a tres funciones:

sumaIterativa: Calcule la sumatoria de 1 hasta n con un metodo iterativo.

sumaRecursiva: Calcule la sumatoria de 1 hasta n con un metodo recursivo.

sumaDirecta: Calcule la sumatoria de 1 hasta n con un metodo matemático directo.

El programa recibe un numero entero positivo "n" por el usuario para hacer una suma consecutiva desde 1 hasta n de 3 formas: iterativa, recursiva y directa, y despues despliega el resultado de cada una. 

//Se incluye la libreria standard de c++ y se declara el namespace a usar. (linea 10)
//Se declaran las variables "n" y "suma" y su tipo para que puedan alamacenar numeros mayores de lo normal. (linea 12)

//En el main se le pide al usuario el numero de maximo de la suma consecutivo y se llama a las diferentes funciones para hacer la suma y se imprimen. (linea 39)


Los casos prueba que pueden causar un overflow son, para las funciones sumaIterativa y sumaRecursiva: Entrada de un numero entero negativo, entrada de un numero muy grande que sobrepase el unsigned long, unsigned long long. 
