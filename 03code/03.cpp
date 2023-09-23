/*
    浮点数在内存中如何存储？
    float 8.25 单精度 32比特
    科学计数法存储 --》 8.25 * 10^0
        二进制的科学计数法
        8.25 -- 》1000.01 -- 》 1.00001 * 2^3
        50.25 -- 》 110010.01 
        符号位     指数     尾数
        1         8        32-9 
                  x+127
        
*/
#include<iostream>

using namespace std;

int main(){

    double d = 1.23456789123456789123456789;
    float f = d;
    int i = d;
    cout << "d = " << d << endl;
    cout << "f = " << f << endl;
    cout << "i = " << i << endl;

    return 0;

}