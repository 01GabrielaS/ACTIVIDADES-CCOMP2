#include<iostream>

using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    int i=2;
    cout << "Ingrese el número: ";
    cin >> num;

    for (; i <= num; i++) {
        while (num % i == 0 && esPrimo(i)) {
            num /= i;
        }
    }

    cout << "\nEl mayor factor primo" << " es " << i-1 << endl;

    return 0;
}