#include <iostream>
#include <conio.h>
#include <string>
#include "atm.h"
using namespace std;


int main(){

    int choice, pin;
    long int accountNumber;

    system("cls");

    // Registering the Account to the ATM for the first time
    atm acc1;
    acc1.setAccount("Jandi Mei Cassey", 908126018, 27890.97, 10969);

    
    do{
        system("cls");

        cout<<endl<<"Enter your account number: "; cin>>accountNumber;
        cout<<endl<<"Enter Security PIN: "; cin>>pin;

        if((accountNumber == acc1.getAccountNumber()) && (pin == acc1.getPin())){
            do{
                double withdraw;
                char yesNo;

                system("cls");

                cout<<endl<<endl<<"**Welcome to ATM**"<<endl;
                cout<<"Select options below:"<<endl<<endl;
                cout<<"1: Check Balance"<<endl;
                cout<<"2: Withdraw Cash"<<endl;
                cout<<"3: View Account Information"<<endl;
                cout<<"4: Change Security PIN"<<endl;
                cout<<"5: Exit"<<endl<<endl;
                
                cout<<"Enter the number of your choice: ";
                cin.ignore();
                cin>>choice;

                switch (choice)
                {
                case 1:
                    cout<<"Your Available Balance is: $"<<acc1.getBalance();
                    _getch();
                    break;
                case 2:
                    do{
                        system("cls");

                        cout<<"Enter amount to withdraw: $";
                        cin>>withdraw;
                        cout<<"Are you sure you want to withdraw this amount from your Account? $"<<withdraw<<endl;
                        cout<<"y/n: ";
                        cin>>yesNo;

                        if(yesNo == 'Y' || yesNo == 'y'){
                            acc1.withdrawCash(withdraw);
                            cout<<endl<<"Press 'Enter' to go back to Menu"<<endl;
                            _getch();
                            break;

                        }
                        else if(yesNo == 'N' || yesNo == 'n'){
                            cout<<"Withdrawal has been cancelled!"<<endl;
                            cout<<"Press Enter";
                            _getch();
                        }
                        else{
                            cout<<"Invalid input! Press Enter";
                            _getch();
                        }

                    }while(1);
                    break;
                case 3:
                    cout<<endl<<"**Account Information**"<<endl<<endl;
                    cout<<"Account Name: "<<acc1.getAccountName()<<endl;
                    cout<<"Account Number: "<<acc1.getAccountNumber()<<endl;
                    cout<<"Available Balance: $"<<acc1.getBalance()<<endl;

                    cout<<endl<<"Press enter to return to Menu"<<endl;
                    _getch();
                    break;
                case 4:
                    acc1.changePin();
                    _getch();
                    break;
                case 5:
                    exit(0);
                
                default:
                    cout<<"Invalid Input!";
                    _getch();
                }


            }while (1);
            

        }
        else{
            cout<<"Invalid account! Press 'Enter' to continue.";
            _getch();
        }

    }while (1);

    
    return 0;
}