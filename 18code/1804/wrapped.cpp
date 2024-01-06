#include"somedefs.h"
#include<bits/stdc++.h>

using namespace std;

double dub(double x){return 2*x;}
double square(double x){return x*x;}

int main(){

    double y = 1.21;
    function<double(double)> ef1 = dub;
    function<double(double)> ef2 = square;
    function<double(double)> ef3 = Fp(5.0);
    function<double(double)> ef4 = Fq(5.0);
    function<double(double)> ef5 = [](double u){return u*u;};
    function<double(double)> ef6 = [](double u){return u*u/2;};
    cout << "Function pointer dub:" << endl;
    cout << " " << use_f(y, ef1);
    cout << "Function pointer square:" << endl;
    cout << " " << use_f(y, ef2);
    cout << "Function object Fp:" << endl;
    cout << " " << use_f(y, ef3);
    cout << "Function object Fq:" << endl;
    cout << " " << use_f(y, ef4);
    cout << "Lambda expression 1:" << endl;
    cout << " " << use_f(y, ef5);
    cout << "Lambda expression 1:" << endl;
    cout << " " << use_f(y, ef6);
    return 0;
}