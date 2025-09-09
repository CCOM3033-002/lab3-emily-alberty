#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(0));

    int max = 100;
    int min = 0;

    int a = rand() % (max - min + 1) + min;
    int b = rand() % (max - min + 1) + min;
    int c = rand() % (max - min + 1) + min;

    cout << "Numeros aleatorios generados: " << a << ", " << b << ", " << c << endl;

    if (a >= b && b >= c)
        cout << a << b << c << endl; 
    else if ( a >= c && c >= b)
        cout << a << c << b << endl ;
    else if (b >= a && a >= c)
        cout << b << a << c << endl;
    else if (b >= c && c >= a)
        cout << b << c << a << endl;
    else if (c >= a && a >= b)
    cout << c << a << b << endl;
    else 
    cout << c << b << a << endl; 

    cout << "Orden descendiente: " << endl; 

}
