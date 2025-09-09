/* Emily Alberty 
801-24-6500
Lab 3
*/  

// header 
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    // empieza el generador de numeros aleatorios 
    srand(time(0));

    // variables para el rango de numeros 
    int max = 100;
    int min = 0;

    // formula para generar los numeros 
    int a = rand() % (max - min + 1) + min;
    int b = rand() % (max - min + 1) + min;
    int c = rand() % (max - min + 1) + min;

    // despliega en la pantalla los tres numeros aleatorios 
    cout << "Numeros aleatorios generados: " << a << ", " << b << ", " << c << endl;

    // nuevas variables de los numeros 
    int primero, segundo, tercero;

    // sortes los numeros de mayor a menor 
     if (a >= b && a >= c) {
        primero = a;
        if (b >= c) {
            segundo = b;
            tercero = c;
        } 
        else {
            segundo = c;
            tercero = b;
        }
    } 
    else if (b >= a && b >= c) {
        primero = b;
        if (a >= c) {
            segundo = a;
            tercero = c;
        } 
        else {
            segundo = c;
            tercero = a;
        }
    } 
    else {
        primero = c;
        if (a >= b) {
            segundo = a;
            tercero = b;
        } 
        else {
            segundo = b;
            tercero = a;
        }
    }

    // despliega los numeros ya sorteados
    cout << "Orden descendiente: " << primero << ", " << segundo << ", " << tercero << endl;

    return 0;
}