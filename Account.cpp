//Fig, 3.8: Account.h
//Account class wiht the name and balance data members,
// and a contructor and deposit function that each perform validation
#include <string>

class Account {
public:
   Account(std::string accountName, int initialBalance)
     :name{accountName} {//asign accountName to data member name
     //validate that the initialBalance is greater than 0; if not,
     //data member balance keeeps its default initial value of 0
     if (initialBalance > 0){
        balance=initialBalance;
        } 
     }
    //function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount){
        if (depositAmount > 0){//if the depositAmount is valid
            balance= balance + depositAmount;//add it to the balance
        }
    }
    //function returns the account balance
    int getBalance() const{
        return balance;
    }
    //function that sets the name
    void SetName(std::string accountName){
        name=accountName;
    }
    //function that returns the name
    std::string getName() const{
        return name;
    }
    //TAREA: function that  withdraws money from an Account
    void withdraw(int withdrawalAmount) {
        if (withdrawalAmount > balance) {
            std::cout << "Withdrawal amount exceeded account balance." << std::endl;
            }
        else {
            balance= balance - withdrawalAmount;
        }
    }
private:
    std::string name; //account data member
    int balance{0};//data member with default initial value
}; //end class Account