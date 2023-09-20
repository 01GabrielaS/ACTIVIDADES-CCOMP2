#include<iostream>
using namespace std;

bool EsDiv(int num, int limite){
    int divisores = 0;
    for (int i = 1; i <= limite; i++) {
        if (num % i == 0) {
            divisores += 1;
        }
    }
    if (divisores == limite) {
        return true;
    }
    return false;
}

int main () {
    long long int var = 1; 
    while (true) {
        if (EsDiv(var, 20)) {
            cout << "El número " << var << " es divisible entre todos los números del 1 al 20." << endl;
            break;
        }
        var++;
    }
    return 0;
}
