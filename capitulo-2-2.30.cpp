#include<iostream>
using namespace std;
int main(){
    float weight{0};
    float height{0};

    cout<<"Ingrese su peso en kilogramos: ";
    cin>>weight;
    cout<<"Ingrese su altura en metros: ";
    cin>>height;

    float BMI=weight/(height*height);
    cout<<"Tu BMI es de:"<<BMI<<endl;

    cout<<"BMI VALUES\nUnderweight: less than 18.5\nNormal:between 18.5 and 24.9\nOverwegiht: between 25 and 29.9\nObese: 30 or greater"<<endl;
    return 0;
}