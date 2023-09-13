#include <iostream>
#include<string>
#include "capiutulo3-ejercicio3.12.h"
using namespace std;
int main (){
    int m;
    int d;
    int y;
    cout<<"Ingrese la fecha de hoy (mm/dd/yyyy)"<<endl;
    cin>>m>>d>>y;
    Date date(m,d,y);
    date.displayDate();
}