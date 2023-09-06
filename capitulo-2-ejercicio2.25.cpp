#include <iostream>
using namespace std;

int main() {
    int num1{0}, num2{0}, num3{0};
    cout << "Ingrese tres enteros:";
    cin >> num1; 
    cin>> num2;
    cin>> num3;

    // Verificar si num1 y num2 son factores de num3
    if (num3 % num1 == 0 && num3 % num2 == 0) {
        cout << num1 << " y " << num2 << " son factores de " << num3 <<endl;
    } else {
        cout << num1 << " y " << num2 << " no son factores de " << num3 << std::endl;
    }

    return 0;
}
