#include<iostream>
#include<string>
using namespace std;

template <typename T>
void Swap(T &a, T &b);

int main(){

    int a = 1;
    int b = 2;
    cout << "int swap" << endl;
    cout << "before" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    Swap(a, b);
    cout << "after" << endl;
    cout << "a = " << a << ", b = " << b << endl;


    double a1 = 1.1;
    double b1 = 2.2;
    cout << "double swap" << endl;
    cout << "before" << endl;
    cout << "a1 = " << a1 << ", b1 = " << b1 << endl;
    Swap(a1, b1);
    cout << "after" << endl;
    cout << "a1 = " << a1 << ", b1 = " << b1 << endl;


    char a2 = '1';
    char b2 = '2';
    cout << "char swap" << endl;
    cout << "before" << endl;
    cout << "a2 = " << a2 << ", b2 = " << b2 << endl;
    Swap(a2, b2);
    cout << "after" << endl;
    cout << "a2 = " << a2 << ", b2 = " << b2 << endl;

    string a3 = "'1'";
    string b3 = "'2'";
    cout << "string swap" << endl;
    cout << "before" << endl;
    cout << "a3 = " << a3 << ", b3 = " << b3 << endl;
    Swap(a3, b3);
    cout << "after" << endl;
    cout << "a3 = " << a3 << ", b3 = " << b3 << endl;



    return 0;
}


template <typename T>
void Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}