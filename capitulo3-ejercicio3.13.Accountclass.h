// Fig. 3.4: Account.h
// Account class with a constructor that initializes the account name.
#include <string>

class Account{
public:
Account (std::string accountName, int initialBalance)
    :name{accountName}{
        if (initialBalance>0){
            balance=initialBalance;
        }
    }
    void deposit(int depositAmount){
        if (depositAmount>0){
            balance+=depositAmount;
        }
    }
    int getBalance()const{
        return balance;
    }
    void setName(std::string accountName){
        name=accountName;
    }
    std::string getName()const{
        return name;
    }
private:
    std::string name{}; // The account holder's name.
    int balance{0};
};