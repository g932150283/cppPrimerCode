#include"end.h"
#include<iostream>
using namespace std;

int main(){

    int n = 1;
    End end1 = n;
    end1.show();
    double d = 1.50;
    End end2 = d;
    end2.show();
    double d2 = double(end2);
    int n1 = int(end2);
    cout << d2 << endl;
    cout << n1 << endl;

    return 0;
}
