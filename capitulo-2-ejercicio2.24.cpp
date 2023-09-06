#include <iostream>
using namespace std;

int main() {
    int n1{0};
    int n2{0};
    int sum{0};

    cout<<"Interger 1:";
    cin>>n1;
    cout<<"Interger 2:";
    cin>>n2;       

    if (n1%2==0){
        cout<<"Interger 1 is an even number."<<endl;
    }
    if (n1%2==1){
        cout<<"Interger 1 is an odd number."<<endl;
    }
    if (n2%2==0){
        cout<<"Interger 2 is an even number."<<endl;
    }
    if (n2%2==1){
        cout<<"Interger 2 is an odd number."<<endl;
    }
    sum=n1+n2;
    if (sum%2==0){
        cout<<"The sum of the two intergers is an even number."<<endl;
    }
    else{
        cout<<"The sum of the two intergers is an odd number."<<endl;
    }
    return 0;
}
