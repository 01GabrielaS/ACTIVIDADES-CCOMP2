#include<iostream>
#include <string>
#include "capitulo3-ejercicio3.13.Accountclass.h"

using namespace std;

void displayAccount(Account accountToDisplay){
    cout<<"Account name:"<<accountToDisplay.getName()<<" balance is:"<<accountToDisplay.getBalance()<<endl;
}

int main(){
    Account account1{"Jane Green", 50};
    Account account2{"Jhon Blue", -7};

  //display initisl balance of each object
   // cout<< "account 1:"<<account1.getName()<<" balance is $:"<<account1.getBalance();
   //cout<<"account 2:"<<account2.getName()<<" balance is $:"<<account2.getBalance()<<endl;
    displayAccount(account1);
    displayAccount(account2);

    cout<<"Enter deposit amount for account1:";//prompt
    int depositAmount;
    cin>>depositAmount;//obtain user input
    cout<<"adding "<<depositAmount<<" to account1 balance."<<endl;
    account1.deposit(depositAmount);//add to account1's balance
  //display balances 
  //cout<<"account1:"<<account1.getName()<<" balance is $:"<<account1.getBalance()<<endl;
  //cout<<"account2:"<<account2.getName()<<" balance is $:"<<account2.getBalance()<<endl;
    displayAccount(account1);
    displayAccount(account2);
    cout<<"Enter deposit amount for account2:";
    cin>>depositAmount;//obtain user input
    cout<<"adding "<<depositAmount<<" to account2 balance."<<endl;
    account2.deposit(depositAmount);//add to account2 balance

  //display balances 
  //cout<<"account1:"<<account1.getName()<<" balance is:"<<account1.getBalance()<<endl;
  //cout<<"account2:"<<account2.getName()<<" balance is:"<<account2.getBalance()<<endl;
    displayAccount(account1);
    displayAccount(account2);
}