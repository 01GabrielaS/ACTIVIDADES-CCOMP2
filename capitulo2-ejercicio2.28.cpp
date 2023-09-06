#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout << "Ingrese un número entero de 4 dígitos: ";
    cin >>num;

    int n1 =num % 10; // Último dígito
    int n2 =(num / 10) % 10; // Tercer dígito
    int n3 =(num / 100) % 10; // Segundo dígito
    int n4 =num / 1000; // Primer dígito
    
    cout << n1 << "  " << n2 << "  " << n3 << "  " << n4 << endl;

    return 0;
}
