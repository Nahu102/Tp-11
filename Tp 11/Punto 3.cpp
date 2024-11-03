#include <iostream>
using namespace std;

int main() {
    // Vector inicial
    int num1[4] = {1, 4, 5, 3};
    
    // Duplicar valores del vector
    for (int i = 0; i < 4; i++)
	{
        num1[i] = num1[i] * 2;
        cout << num1[i] << endl; // Imprimir valores duplicados
    }
    
    // El usuario ingresa un nuevo elemento
    int nuevo, posicion;
    cout << "ingrese un nuevo elemento: ";
    cin >> nuevo;
    cout << "ingrese la posicion en la que desea colocarlo desde 0 hasta 4: ";
    cin >> posicion;

    // Verificar que la posición esté en el rango correcto
    if (posicion < 0 || posicion > 4)
	{
        cout << "posición inválida." << endl;
        return 1; // Salir del programa
    }

    // Nuevo vector
    int num2[5];
    
    // Copiar num1
    for (int xy = 0; xy < 4; xy++)
	{ // Copiar solo 4 elementos
        num2[xy] = num1[xy];
    }

    // Agregar a num2 el nuevo elemento
    for (int y = 4; y > posicion; y--)
	{
        num2[y] = num2[y - 1]; // Mover elementos hacia la derecha
    }
    num2[posicion] = nuevo; // Insertar el nuevo elemento

    // Borrar ceros
    int contador_0 = 0;
    for (int j = 0; j < 5; j++)
	{
        if (num2[j] == 0)
		{
            contador_0++;
        }
    }

    // Crear un nuevo vector sin ceros
    int num3[5 - contador_0]; // Tamaño del nuevo arreglo
    contador_0 = 0;
    for (int yx = 0; yx < 5; yx++)
	{
        if (num2[yx] != 0)
		{
            num3[yx - contador_0] = num2[yx];
        }
		else
		{
            contador_0++;
        }
    }

    // Imprimir resultado
    for (int r = 0; r < (5 - contador_0); r++) 
	{ // Imprimir solo hasta el tamaño correcto
        cout << num3[r] << endl;
    }

    return 0;
}

