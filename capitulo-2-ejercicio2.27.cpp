#include <iostream>
using namespace std;

int main() {
    char caracter;
    cout<<"Ingrese el caracter:";
    cin>>caracter;
    cout<<static_cast<int>(caracter);

    return 0;
}

