#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
using namespace std;

int sumar(int a, int b);

int main()
{
    int numeros[] = {1,2,3};

    for(int num : numeros)
    {
        cout << num << endl;
    }

    for(int i = 0; i < 5; i++)
    {
        cout << numeros[i] << endl;
    }
    // enteros
    unsigned char muyCorto; // 0 hasta 255
    short corto;            //-32768 , hast 32767    // 2 bytes
    int entero;
    long long int largo;

    // Reales
    float real;
    double realPreciso;

    // caracteres
    char caracter;

    // booleano
    bool booleano; 

    // cout << "Un float ocupa " << sizeof(real) << " bytes en memoria " << endl;
    // cout << "Un double ocupa " << sizeof(double) << " bytes en memoria " << endl;


    // cout << "Un char ocupa " << sizeof(muyCorto) << " bytes en memoria " << endl;
    // cout << "Un short ocupa " << sizeof(corto) << " bytes en memoria " << endl;
    // cout << "Un int ocupa " << sizeof(entero) << " bytes en memoria " << endl;
    // cout << "Un long ocupa " << sizeof(largo) << " bytes en memoria " << endl;

    // cout << "Introduce un número muy corto: ";
    // scanf("%d", &muyCorto);
    // // cout << "El valor introducido es " << static_cast<int>(muyCorto);
    // printf("El valor introducido es %d", muyCorto);

    cout << "2 + 2 = " << sumar(2,2) << endl;



    // string nombre;
    // cout << "Introduzca su nombre: ";
    // cin >> nombre;
    // cout << "Hola " << nombre << endl;
    return EXIT_SUCCESS;
}


int sumar(int a, int b)
{
    return a + b;
}