#include<iostream>
using namespace std;


int MCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Función para calcular el MCM (Mínimo Común Múltiplo) de dos números
int MCM(int a, int b) {
    return (a * b) / MCD(a, b);
}

int main() {
    int resultado = 1;

    // Calcular el MCM de los números del 1 al 20
    for (int i = 2; i <= 20; i++) {
        resultado = MCM(resultado, i);
    }

    cout << "El número más pequeño divisible por todos los números del 1 al 20 es: " << resultado << endl;

    return 0;
}
