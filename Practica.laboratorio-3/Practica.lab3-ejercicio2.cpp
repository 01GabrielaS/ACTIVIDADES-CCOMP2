#include <iostream>
using namespace std;

bool esPerfecto(int num) {
    int suma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            suma += i;
        }
    }
    if (suma==num){
        return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de números perfectos a encontrar: ";
    cin >> n;

    int numero = 1;
    int encontrados = 0;

    cout << "\nLos" << n << " números perfectos son:" << endl;

    while (encontrados < n) {
        if (esPerfecto(numero)) {
            cout << numero << " ";
            encontrados++;
        }
        numero++;
    }

    cout << endl;

    return 0;
}

