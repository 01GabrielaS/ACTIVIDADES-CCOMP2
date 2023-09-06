#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int radius{0}; //radio de la circunferencia
    float pi=3.14159;
    cout<<"Ingrese el radio de la circunferencia: ";
    cin>>radius;
    cout<<"Diameter:"<<radius*2<<endl;
    cout<<"Circunference:"<<(radius*2)*pi<<endl;
    cout<<"Area:"<<(pow(radius,2))*pi<<endl;

    return 0;
}