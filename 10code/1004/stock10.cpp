#include<iostream>
#include"stock10.h"
using namespace std;
Stock::Stock(){
    cout << "Default constructor called" << endl;
    company = "no name";
    shares = 0;
    share_val = 0;
    total_val = 0;
}
Stock::Stock(const string & co, long n, double pr){
    cout << "Constructor using" << co << " called" << endl;
    company = co;
    if (n < 0){
        cout << "Number of shares can't be negative;" << endl;
        cout << company << " shares set to 0." << endl;
        shares = 0;
    }else{
        shares = n;
    }
    share_val = pr;
    set_tot();
}
Stock::~Stock(){
    cout << "===============Bye, " << company << " Done================" << endl;
}
void Stock::buy(long num, double price){
    if (num < 0){
        cout << "Number of shares can't be negative;" << endl;
        cout << "Transaction is aborted" << endl;
    }else{
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price){
    if (num < 0){
        cout << "Number of shares can't be negative;" << endl;
        cout << "Transaction is aborted" << endl;
    }else if(num > shares){
        cout << "Number of shares can't be negative;" << endl;
        cout << "Transaction is aborted" << endl;
    }else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price){
    share_val = price;
    set_tot();
}
void Stock::show(){
    cout << "=====show stock======" << endl;
    cout << "Company : " << company << endl;
    cout << "shares : " << shares << endl;
    cout << "share price : " << share_val << endl;
    cout << "total worth : " << total_val << endl;
}