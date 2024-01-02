#include<bits/stdc++.h>

using namespace std;

double sum(initializer_list<double> il);
double average(const initializer_list<double> & ril);

int main(){
    cout << "List 1 : sum = " << sum({2, 3, 4}) << " , ave = " << average({2, 3, 4}) << endl;
    initializer_list<double> d1 = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "List 2 : sum = " << sum(d1) << " , ave = " << average(d1) << endl;
    d1 = {16.0, 25.0, 36.0, 40.0, 64.0};
    cout << "List 2 : sum = " << sum(d1) << " , ave = " << average(d1) << endl;
    return 0;
}

double sum(initializer_list<double> il){
    double total = 0;
    for(auto p = il.begin(); p != il.end(); p++){
        total += *p;
    }
    return total;
}

double average(const initializer_list<double> & ril){
    return sum(ril) / ril.size();
}