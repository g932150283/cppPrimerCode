#include<iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T *a, T *b, int n);

template <typename T>
void Show(T *a);

const int Lim = 8;

int main(){
    // char * a = "abcde";
    // char * b = "12345";
    // a[1] = b[1];
    // cout << a[1] << endl;

    double a[] = {1.1, 2.1, 3.1, 1.1, 2.1, 3.1, 0, 0};
    double b[] = {4.1, 5.1, 6.1, 4.1, 5.1, 6.1, 1, 1};
    Show(a);
    Show(b);
    Swap(a, b, 2);
    Show(a);
    Show(b);
    return 0;
}

template <typename T>
void Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T *a, T *b, int n){
    T temp;
    for(int i = 0; i < n; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

template <typename T>
void Show(T *a){
    cout << "---------- show " << a << "----------" << endl;
    for (int i = 0; i < Lim; i++){
        cout << a[i] << endl;
    }
    cout << "---------- show end ----------" << endl;
}