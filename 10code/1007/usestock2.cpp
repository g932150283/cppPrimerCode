#include<iostream>
#include"stock20.h"
#include<string>

using namespace std;

const int STKS = 4;

int main(){

    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20),
        Stock("Boffo Objects", 2, 2),
        Stock("Nifty Foods", 10, 50),
        Stock("111NanoSmart", 112, 20.1),
    };

    cout << "Stock holding : " << endl;
    int st;
    for (st = 0; st < STKS; st++){
        stocks[st].show();
    }

    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++){
        top = &top->topval(stocks[st]);
    }
    cout << "======top stock========" << endl;
    top->show();

    
    return 0;
}