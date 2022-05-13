#include <iostream>
#include <fstream>
using namespace std;

void signInForm(string* username, string* password){
    // string username, password;
    
    cout<<"Enter your username: "; cin>>*username;
    cout<<"Enter your password: "; cin>>*password;
}

bool isRegistered(string username, string password){
    string un, pw;
    ifstream read(username+ ".txt");
    getline(read, un);
    getline(read, pw);

    if(username == un && password == pw){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int choice;
    string username, password;

    //Welcome
    cout<<"Welcome to the Login & Registration System"<<endl;
    cout<<"1: Register\n 2: Login\n Enter the number of your choice :";
    cin>>choice;

    //Register
    if(choice == 1){
        cout<<"Register Information"<< endl;
        signInForm(&username, &password);
       
        bool registered = isRegistered(username, password);

        if(!registered){
            ofstream newAcc;
            newAcc.open(username+".txt");
            newAcc<< username<< endl << password;
            newAcc.close();
            cout<<"Registration complete!"<<endl;

            main();
        }
        else{
            cout<<"This account already exists!"<<endl;
            system("PAUSE");
            main();
        }


    }

    //Login
    else if(choice==2) {
        cout<<"Login to your account"<< endl;
        signInForm(&username, &password);
        bool registered = isRegistered(username, password);
        
        if(!registered){
            cout<<"This account does not exist! or you've entered a wrong password"<<endl;
            // cin.get();
            system("PAUSE");
            main();
        }
        else{
            cout<< "Login Successful"<<endl;
            cout<<"Press any key to go back to menu";
            // cin.get();
            system("PAUSE");
            return 1;
        }
   
    }
    else{
        cout<<"Invalid input!"<<endl;
        system("PAUSE");
        main();
    }
    
}