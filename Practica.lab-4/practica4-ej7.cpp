#include <iostream>
using namespace std;

bool esPrimo(int num){
    if (num<=0){
        return false;
    }
    if (num==2){
        return true;
    }
    if(num%2==0){
        return false;
    }
    for (int i=3; i*i<=num; i+=2){
        if (num%i==0){
            return false;
        }
    }
    return true;

}


int main(){
    int num=2;
    int counter=0;
    while(true){
        if(esPrimo(num)){
            counter+=1;
        }
        if(counter==10001){
            cout<<"Número primo 10001: "<<num; 
            break;
        }
        num+=1;
    }
    return 0;
}

