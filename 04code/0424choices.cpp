#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){

    double a1[4] = {1.2, 3.2, 33.2, 22};
    vector<double> a2(4);
    for(int i = 0; i < 4; i++){
        a2[i] = i + 1.11;
    }
    //两个array地址不同，array存储在栈中
    array<double, 4> a3 = {1.11, 2.22, 3.33, 4.44};
    array<double, 4> a4 = a3;

    cout << "address of a3 = " << &a3 << endl;
    cout << "address of a4 = " << &a4 << endl;

    a1[-2] = 11.11;
    cout << "a1[-2] = " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[1] = " << a3[1] << " at " << &a3[1] << endl;
    cout << "a4[1] = " << a4[1] << " at " << &a4[1] << endl;
    cout << "a3[2] = " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2] = " << a4[2] << " at " << &a4[2] << endl;
    cout << &a3 << endl;

    return 0;
}