#include <iostream>

using namespace std;

class Account{
protected:
    double balance;
public:
    Account(double bal){
        if(bal>0)
            balance=bal;
        else
            balance=0.0;
    }
    void credit(double amount){
        balance+=amount;
    }
    void debit(double amount){
        if(balance>amount)
            balance-=amount;
        else
            cout<<"Insufficient funds"<<endl;
    }
    double getBalance() { return balance; }

};

class CheckingAccount : public Account{
private:
    double fee;
public:
    CheckingAccount(double bal, double f): Account(bal){
        fee=f;
    }
    void debit(double amount){
        if(balance>amount){
            balance= balance - amount - fee;
        }
        else{
            cout<<"insufficient funds"<<endl;
        }

    }







};
int main()
{
    CheckingAccount myacct(500, 0.5);
    myacct.credit(100);
    cout<<myacct.getBalance()<<endl;
    myacct.debit(50);
    cout<<myacct.getBalance()<<endl;
    return 0;
}
