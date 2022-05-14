#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "book.h"
using namespace std;

book::book(){
    author = new char[30];
    title = new char[30];
    publisher = new char[30];
    price = new float;
    stockNo = new int;

}

void book::addBook(){
    cin.ignore();
    cout<<"\nEnter new book details"<<endl;
    cout<<"Author Name: "; cin.getline(author, 30);
    cout<<"Title of the Book: "; cin.getline(title, 30);
    cout<<"Publisher Name: "; cin.getline(publisher, 30);
    cout<<"Price: "; cin>>*price;
    cout<<"Stock Number: "; cin>>*stockNo;

    cout<<"New Book Details was Added Successfully!"<<endl;

}

bool book::search(char t[30], char a[30]){
    if(strcmp(t, title)==0 && strcmp(a, author)==0){
        return 1;
    }
    else{
        return 0;
    }
}
void book::previewBook(){
    cout<<"\n\nBook Details\n"<<endl;
    cout<<"Title of Book: "<<title<<endl;
    cout<<"Author Name: "<<author<<endl;
    cout<<"Publisher Name: "<<publisher<<endl;
    cout<<"Stock Number: "<<*stockNo<<endl;
    cout<<"Price: "<<*price<<endl;
}

void book::buyBook(){
    int num;
    char ans;
    cout<<"\nEnter number of books to buy: ";cin>>num;
    cout<<"Total Amount: $"<<*price * num<<endl;
    cout<<"Continue Book Purchase? y/n: "; cin>>ans;
    if(ans=='n' || ans =='N'){
        cout<<"exit"<<endl;
    }
    else if(ans== 'y'|| ans=='Y'){

        *stockNo= *stockNo-num;
        cout<<"\n\nBooks purchased succesfully!"<<endl;
    }
    else{
        cout<<"\nInvalid Input!"<<endl;
    }



}

void book::editBook(){
    cout<<"\nEnter New Details for this Book\n"<<endl;
    cout<<"Author Name: "; cin.getline(author, 30);
    cout<<"Title of the Book: "; cin.getline(title, 30);
    cout<<"Publisher Name: "; cin.getline(publisher, 30);
    cout<<"Price: "; cin>>*price;
    cout<<"Stock Number: "; cin>>*stockNo;

    cout<<"\n\nEdit saved successfully!"<<endl;
}