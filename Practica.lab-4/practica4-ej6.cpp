#include<iostream>
#include <cmath>
using namespace std;

int sum_cuadrados(int lim){
    int suma=0;
    for (int i =1;i<=lim;i++){
        suma +=pow(i,2);
    }
    return suma;
}

int sum_al_cuadrado(int lim){
    int suma=0;
    for(int i=1;i<=lim;i++){
        suma+=i;
    }
    return pow(suma,2);
}

int main(){
    int n=100;
    cout<<"Suma de cuadrados del 1 al 10: "<<sum_cuadrados(n)<<endl;
    cout<<"Suma al cuadrado de los enteros: "<<sum_al_cuadrado(n)<<endl;
    cout<<"Resto de la diferencia de los cuadrados:"<<sum_al_cuadrado(n)-sum_cuadrados(n);
    return 0;
}