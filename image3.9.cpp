#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    // display initial balance of each object 
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();
    cout << "\n\nEnter deposit amount for account1:"; // prompt 
    int depositAmount; 
    cin >> depositAmount; // obtain user input 
    cout << "Adding $" << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance 
    // display balances 
    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance(); 
    cout << "\n\naccount2: " << account2.getName() << " balance is $" << account2.getBalance(); 
    cout << "\n\nEnter deposit amount for account2:"; // prompt 
    cin >> depositAmount; // obtain user input 
    cout << "Adding $" << depositAmount << " to account2 balance";  
    account2.deposit(depositAmount); // add to account2 balance
    // display balances 
    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance(); 
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << endl;
    //withdraw 
    cout<<"Enter withdrawal amount fot account1: ";
    int withdrawalAmount1;
    cin>>withdrawalAmount1;
    account1.withdraw(withdrawalAmount1);

        cout<<"Enter withdrawal amount fot account2: ";
    int withdrawalAmount2;
    cin>>withdrawalAmount2;
    account2.withdraw(withdrawalAmount2);

    //display new balances
    cout<<"Account1:"<<account1.getName()<<"balance is:"<<account1.getBalance()<<endl;
    cout<<"Account2:"<<account2.getName()<<"balance is:"<<account2.getBalance()<<endl;

    return 0;
}
