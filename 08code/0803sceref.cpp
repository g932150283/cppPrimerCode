#include<iostream>

using namespace std;

int main(){

    int rats = 10;
    int & roudents = rats;
    cout << "rats = " << rats << endl;
    cout << "roudents = " << roudents << endl;
    cout << "address of rats = " << &rats << endl;
    cout << "address of roudents = " << &roudents << endl;
    roudents = 3;
    cout << "rats = " << rats << endl;
    cout << "roudents = " << roudents << endl;
    cout << "address of rats = " << &rats << endl;
    cout << "address of roudents = " << &roudents << endl;
    return 0;
}