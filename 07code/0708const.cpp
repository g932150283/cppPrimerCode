#include<iostream>
using namespace std;
int main(){

    const int **pp2;
    int *p1;
    const int i = 12;

    pp2 = &p1;
    *pp2 = &i;
    *p1 = 10;

    cout << "*p1 = " << *p1 << endl;
    cout << "p1 = " << p1 << endl;
    cout << "i = " << i << endl;
    
    return 0;
}