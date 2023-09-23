#include<iostream>

using namespace std;

int main(){

    int a = 42;
    int b = 0x42;
    int c = 042;

    cout << "a = " << a << " (a = 42)" << endl;
    cout << "b = " << b << " (b = 0x42)" << endl;
    cout << "c = " << c << " (c = 042)" << endl;
/*
    a = 42 (a = 42)
    b = 66 (b = 0x42)
    c = 34 (c = 042)
*/
    return 0;

}