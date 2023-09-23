/*
    浮点数运算速度比整数慢，而且精度将降低
    但是浮点数表示的范围大
*/

#include<iostream>

using namespace std;

int main(){

    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    // 运算过程中，精度丢失 
    return 0;
}