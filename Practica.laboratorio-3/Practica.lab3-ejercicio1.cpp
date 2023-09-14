#include <iostream>

using namespace std;

void PrintPrimo(int num) {
    int divisores = 0;
    int i = 1; 

    if (num == 0 || num == 1) {
        cout << "No es primo" << endl;
        return;
    }

    while (i <= (num / 2)) {
        if (num % i == 0) {
            divisores += 1;
        }
        i += 1;
    }

    if (divisores > 1) {
        cout << "";
    } else {
        cout << num << " ";
    }
}

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    for (int i=1; i<=numero;i++){
        PrintPrimo(i);
    }
    return 0;
}
