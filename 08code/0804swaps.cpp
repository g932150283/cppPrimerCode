#include<iostream>
using namespace std;

void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);

int main(){

    int x = 3;
    int y = 4;
    
    swapr(x, y);
    cout << "x = " << x << " , y = " << y << endl;

    x = 3;
    y = 4;
    swapp(&x, &y);
    cout << "x = " << x << " , y = " << y << endl;

    x = 3;
    y = 4;
    swapv(x, y);
    cout << "x = " << x << " , y = " << y << endl;

    return 0;
}

void swapr(int & a, int & b){
    cout << "-----swapr(int & a, int & b)-----" << endl;
    int temp = a;
    a = b;
    b = temp;
}
void swapp(int * p, int * q){
    cout << "-----swapp(int * p, int * q)-----" << endl;
    int temp = *p;
    *p = *q;
    *q = temp;
}
void swapv(int a, int b){
    cout << "-----swapv(int p, int q)-----" << endl;
    int temp = a;
    a = b;
    b = temp;
}