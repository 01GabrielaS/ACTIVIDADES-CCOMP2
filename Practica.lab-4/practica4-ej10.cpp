#include <iostream>
using namespace std;

bool EsPrimo(int num){
    if (num==1){
        return false;
    }
    if (num==2){
        return true;
    }
    if(num%2==0){
        return false;
    }
    for(int i=3; i*i<=num;i+=2){
        if (num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num=2000000;
    long long int suma=0;
    for (int i=2;i<=num;i++){
        if (EsPrimo(i)){
            suma+=i;
        }
    }
    cout<<"La suma de los números primos hasta el "<<num<<" es: "<<suma;
}