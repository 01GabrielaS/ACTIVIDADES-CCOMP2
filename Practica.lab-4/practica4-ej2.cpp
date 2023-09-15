#include<iostream>
using namespace std;

int main() {
    int n = 4000000;
    int primero = 1, segundo = 2;
    int suma = 0;

    while (primero <= n) {
        if (primero % 2 == 0) {
            suma += primero;
        }

        int siguiente = primero + segundo;
        primero = segundo;
        segundo = siguiente;
    }

    cout << "suma de los número en la secuencia= "<<suma<<endl;

    return 0;
}