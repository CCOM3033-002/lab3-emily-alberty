#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(0));

    int max = 100;
    int min = 0;

    int numeroAleatorio1 = rand() % (max - min + 1) + min;
    int numeroAleatorio2 = rand() % (max - min + 1) + min;
    int numeroAleatorio3 = rand() % (max - min + 1) + min;

    cout << "Numeros aleatorios generados: " << numeroAleatorio1 << ", " << numeroAleatorio2 << ", " <<numeroAleatorio3 << endl;

    cout << "Orden descendiente: " << endl; 

}
