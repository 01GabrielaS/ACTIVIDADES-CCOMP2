#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    float MHR1 = 220 - edad;
    float MHR2 = 208 - 0.7 * edad;
    float MHR3 = 207 - 0.7 * edad;
    float MHR4 = 211 - 0.64 * edad;

    cout << "Sugerencias de MHR basadas en diferentes fórmulas:" << endl;
    cout << "Fórmula 1: MHR = " << MHR1 << endl;
    cout << "Fórmula 2: MHR = " << MHR2 << endl;
    cout << "Fórmula 3: MHR = " << MHR3 << endl;
    cout << "Fórmula 4: MHR = " << MHR4 << endl;
    
    float smallestMHR = min(min(MHR1, MHR2), min(MHR3, MHR4)); // Usar "min" correctamente
    float largestMHR = max(max(MHR1, MHR2), max(MHR3, MHR4)); // Usar "max" correctamente

    cout << "Rango sugerido de MHR: De " << smallestMHR << " a " << largestMHR << endl;

    return 0;
}
