#include"somedefs.h"
#include<bits/stdc++.h>

using namespace std;

double dub(double x){return 2*x;}
double square(double x){return x*x;}

int main(){

    double y = 1.21;
    cout << "Function pointer dub:" << endl;
    cout << " " << use_f(y, dub);
    cout << "Function pointer square:" << endl;
    cout << " " << use_f(y, square);
    cout << "Function object Fp:" << endl;
    cout << " " << use_f(y, Fp(5.0));
    cout << "Function object Fq:" << endl;
    cout << " " << use_f(y, Fq(5.0));
    cout << "Lambda expression 1:" << endl;
    cout << " " << use_f(y, [](double u){return u*u;});
    cout << "Lambda expression 1:" << endl;
    cout << " " << use_f(y, [](double u){return u*u/2;});
    return 0;
}