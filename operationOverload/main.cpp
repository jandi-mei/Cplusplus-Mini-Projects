#include <iostream>
using namespace std;
#include "Warehouse.h"

int main(){
 Warehouse wh1(24, 35);
 Warehouse wh2(41, 33);
 Warehouse wh3;

 wh3 = wh1 + wh2;
 cout<< wh3.app <<endl;
 cout << wh3.bana<<endl;
 cout<< "Finally it worked!";
return 0;
}