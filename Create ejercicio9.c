// 9. Suma con Apuntadores
// Escribir un programa que sume los elementos de un arreglo de enteros utilizando apuntadores.
#include <stdio.h>

int sumaArreglo(int *arr, int tamano) {
    // Implementar la suma aquí
   int suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += (*arr + i); //suma=suma+*(arr+i)
    }
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    // Código para calcular y mostrar la suma
    printf("La suma de los elementos del arreglo es: %d\n", sumaArreglo(numeros, 5));
    return 0;
}
