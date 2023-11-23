#include<iostream>
#include"mytime0.h"

using namespace std;

int main(){

    Time t;
    Time t1 = Time(1,59);
    cout << "=====show t======" << endl;
    t.Show();
    cout << "=====show t1======" << endl;
    t1.Show();
    cout << "=====show t1 + h2======" << endl;
    t1.AddHr(2);
    t1.Show();
    cout << "=====show t1 + m3======" << endl;
    t1.AddMin(3);
    t1.Show();
    cout << "=====show t reset 1 1======" << endl;
    t.Reset(1,1);
    t.Show();
    cout << "=====show t1 + t======" << endl;
    t1 = t1.Sum(t);
    t1.Show();
    cout << "=====show t1 reset======" << endl;
    t1.Reset();
    t1.Show();
    cout << "=====show t1 + t======" << endl;
    t1 = t1 + t;
    t1.Show();



    return 0;
}