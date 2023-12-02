#include<iostream>
#include"stock10.h"
#include<string>
using namespace std;
int main(){

    cout << "Using constructors to create new objects" << endl;
    Stock stock1("NanoSmart", 12, 20);
    stock1.show();
    Stock stock2("Boffo Objects", 2, 2);
    stock2.show();
    
    cout << "Assigning stock1 to stock2 :" << endl;
    stock2 = stock1;
    cout << "Listing stock1 and stock2 :" << endl;
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object :" << endl;
    stock1 = Stock("Nifty Foods", 10, 50);
    stock1.show();
    return 0;
}