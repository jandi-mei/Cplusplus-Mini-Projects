#ifndef  WAREHOUSE_H
#define WAREHOUSE_H

class Warehouse{
    public:
    int app;
    int bana;
    Warehouse();
    Warehouse(int a, int b);

    Warehouse operator+(Warehouse);
};

#endif