#ifndef BOOK_H
#define BOOK_H

class book{
    private:
    char *author, *title, *publisher;
    float* price;
    int* stockNo;

    public:
    book();
    void addBook();
    bool search(char t[30], char a[30]);
    void previewBook();
    void buyBook();
};

#endif