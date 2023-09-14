#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números de la secuencia de Fibonacci: ";
    cin >> n;

    int primero = 0, segundo = 1;

    if (n >= 1) {
        cout << primero << " ";
    }
    if (n >= 2) {
        cout << segundo << " ";
    }

    for (int i = 3; i <= n; i++) {
        int siguiente = primero + segundo;
        cout << siguiente << " ";
        primero = segundo;
        segundo = siguiente;
    }

    cout << endl;

    return 0;
}
