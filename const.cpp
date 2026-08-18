#include <iostream> 
using namespace std; 
//Saving Acocunt Class
class SavingAccount {
    private:
string accountHolderName;
int accountNumber;
double balance;
double interestrate;
public:
SavingAcocunt(string name,int accNumber,double initialBalance, double rate){
    accountHolderName=name;
    accountNumber=accNumber;
    balance=initialBalance;
    interestRate=rate;
}
void deposit(double amount){
    if(amount>0){
        balance+=amount ;
        cout<<"Deposited:₹" << amount << endl;
    }
}
void withdraw(double amount)
}