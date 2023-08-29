//Dylan Martinez Alonzo A01736968
//Luis Adrián Díaz Santana González A01425183
//Restituto Lara Larios A01737216
// 26/08/2023



#include <iostream>
using namespace std;

unsigned long n=0;
unsigned long long suma=0;

//Para la suma iterativa se tiene la variable "i" que inicia desde 1 y por cada iteracion se llama a la variable "suma" y se le suma el valor de "i". Confrome i va aumentando se sumaran todos los numero consecutivos, y se detiene cuando sea mayor que "n". La complejidad de esta funcion es lineal O(n), ya que el numero de operaciones que se realizan depende directamente del numero que de el usuario
unsigned long long sumaIterativa(unsigned long n){
  for (int i=1;i<=n;i++){
    suma=suma+i;
  }
  return suma;
}

//Para la suma recursiva si n es mayor a 1 entonces se le asigna a la variable "suma" el valor de n mas el valor de n menos 1, lo cual lo llevara a seguir llamando la funcion hasta que se llama con el numero 1, entonces regresara 1 y se haran todas las sumas para al final regresar el valor de "suma". La complejidad de esta funcion es lineal O(n), ya que las veces que se vuelve a llamar a la funcion depende directamente del numero que da el usuario
unsigned long long sumaRecursiva(unsigned long n){
  if (n>1){
    suma=n+sumaRecursiva(n-1);
    return suma;
  }
  else{
    return 1;
  }
}

//Para la suma directa se utliza la formula para la suma de numeros consecutivos, en el que se debe de multiplicar n por el numero que le sigue, o sea que se le suma 1, y el resultado se divide entre dos, y finalmente se regresa el valor de "suma". La complejidad de esta funcion es constante O(1), ya que sin importar el numero que da el ususario, siempre se calcula la misma ecuacion una vez.
unsigned long long sumaDirecta(unsigned long n){
  suma=n*(n+1)/2;
  return suma;
}

int main() {
  cout<<"Favor de ingresar el numero hasta donde se hara la suma consecutiva: ";
  cin>>n;
  cout<<"\n\n";
  cout<<"Para la suma iterativa el resultado es: "<<sumaIterativa(n)<<"\n\n";
  cout<<"Para la suma recursiva el resultado es: "<<sumaRecursiva(n)<<"\n\n";
  cout<<"Para la suma directa el resultado es: "<<sumaDirecta(n)<<"\n\n";
}
