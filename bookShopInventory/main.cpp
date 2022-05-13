#include <iostream>
#include "book.h"
using namespace std;



int main(){
    int choice;
    book *bookList[30];
    int x = 0, w=0;
    char title[30], author[30];

    while(1){
        cout<<"\n\nMENU\n"
        <<"\n1: Entry of New Book"
        <<"\n2: Buy book"
        <<"\n3: Search for Book"
        <<"\n4: Edit Details of Book"
        <<"\n5: Exit"
        <<"\n\nEnter  the number of your choice: "<<endl;
        cin>>choice;

        switch(choice){
            case 1: bookList[x]= new book;
                    bookList[x]->addBook();
                    x++; break;
            case 2: cin.ignore();
                    cout<<"Enter Title: "; cin.getline(title, 30);
                    cout<<"Enter Author Name: "; cin.getline(author, 30);
                    for(int y=0; y<= x; y++){
                        bool exist= bookList[y]->search(title, author);
                        if(exist){
                            bookList[y]->previewBook();
                            bookList[y]->buyBook();
                            break;
                        }   
                        if(y=x && !exist){
                            w=1;
                        }
                    }
                    if(w==1){
                        cout<<"\n\nThe Book is not available!\n"<<endl;
                        break;
                    }
                    else{
                        break;
                    }

            default: exit(0);
        }


    }
    return 0;
}