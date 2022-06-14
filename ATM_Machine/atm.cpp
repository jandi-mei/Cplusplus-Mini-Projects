#include "atm.h"
#include <iostream>
#include <string>
using namespace std;

atm::atm()
{
}
void atm::setAccount(string accName, long int accNum, double bal, int enteredPin){
    accountName = accName;
    accountNumber = accNum;
    balance = bal;
    pin = enteredPin;
}

string atm::getAccountName(){
    return accountName;
}
long int atm::getAccountNumber(){
    return accountNumber;
}

int atm::getPin(){
    return pin;
}

double atm::getBalance(){
    return balance;
}

void atm::withdrawCash(double amount){
    if(amount <=0 || amount > balance){
        cout<<"Not enough balance to withdraw the entered amount!";
    }
    else{
        balance-= amount;
        cout<<"You have successfully withdrawn $"<<amount<<endl;
        cout<<"Your current balance is $"<<balance<<endl;
    }
}

void atm::changePin(){
    int enteredPin, newPin, newPin2;

    do{

        cout<<"Enter current PIN: ";
        cin>>enteredPin;

        if(enteredPin == pin){
            cout<<"Enter new PIN: ";
            cin>>newPin;
            cout<<"Confirm new PIN: ";
            cin>>newPin2;
            if(newPin2 == newPin){
                pin= newPin;
                cout<<"PIN has been successfully changed!"<<endl;
                break; break;
            }
            else{
                cout<<"Error: PIN change unsuccessful"<<endl;
            }
        }
        else{
            cout<<"Invalid PIN!"<<endl;
        }

    }while(1);
}

atm::~atm()
{
}