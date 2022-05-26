#ifndef ATM_H
#define ATM_H
#include <iostream>
#include <string>
using namespace std;


class atm
{
private:
    string accountName;
    long int accountNumber;
    double balance;
    int pin;

public:
    atm();
    void setAccount(string accName, long int accNum, double bal, int enteredPin);
    string getAccountName();
    long int getAccountNumber();
    int getPin();
    double getBalance();
    void withdrawCash(double amount);
    void changePin();
    ~atm();
};



#endif