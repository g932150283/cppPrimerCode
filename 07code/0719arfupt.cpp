#include<iostream>

using namespace std;

const double * f1(const double ar[], int n);
const double * f2(const double [], int n);
const double * f3(const double *, int n);

int main(){

    double av[3] = {1112.3, 1542.6, 2227.9};
    
    const double * (*p1)(const double *, int n) = f1;
    //const double * (*p2)(const double *, int n) = f2;
    auto p2 = f2;

    cout << "Using pointers to functions:" << endl;
    cout << "Address Value" << endl;
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
    
    const double * (*pa[3])(const double *, int n) = {f1, f2, f3};
    //const double * (**pb)(const double *, int n) = pa;
    auto pb = pa;
    cout << "Using an array of pointers to functions:" << endl;
    cout << "Address Value" << endl;
    for (int i =0; i < 3; i++){
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
    }
    // int a[3] = {0,2,3};
    // cout << *a << endl;
    


    return 0;
}

const double * f1(const double ar[], int n){
    return ar;
}
const double * f2(const double ar[], int n){
    return ar + 1;
}
const double * f3(const double * ar, int n){
    return ar + 2;
}