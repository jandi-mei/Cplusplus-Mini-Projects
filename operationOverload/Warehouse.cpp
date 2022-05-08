#include <iostream>
#include "Warehouse.h"
using namespace std;

Warehouse::Warehouse(){
}

Warehouse::Warehouse(int a, int b){
    app = a;
    bana = b;
}

Warehouse Warehouse::operator+(Warehouse fruitA){
    Warehouse total;
    total.app = app + fruitA.app;
    total.app = bana + fruitA.bana;
    return total; 
}