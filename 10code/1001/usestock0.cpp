#include<iostream>
#include"stock00.h"
#include<string>

int main(){

    Stock s;
    s.acquire("NanoSamrt", 20, 12.5);
    s.show();
    s.buy(15, 18.125);
    s.show();
    s.sell(400, 20);
    s.show();
    s.buy(300000, 40.125);
    s.show();
    s.sell(300000, 0.125);
    s.show();
    return 0;
}