/*
    面向对象编程OOP的本质是设计并拓展自己的数据类型。

    基本数据类型、复合数据类型

    int b;
    b = 5;
        程序找到一块可以存储整数的内存，并将内存单元标记为b，将5复制到该内存单元中
        可以使用&获取b的内存地址

    short至少16位
    long至少32位
    char 8位 
*/
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int_max = " << n_int <<endl;
    cout << "int = " << sizeof(int) << endl;
    cout << "short_max = " << n_short <<endl;
    cout << "short = " << sizeof(n_short) << endl;
    cout << "long_max = " << n_long <<endl;
    cout << "long = " << sizeof(long) << endl;
    cout << "long_long_max = " << n_llong <<endl;
    cout << "long long = " << sizeof(long long) << endl;
/*
int_max = 2147483647
int = 4
short_max = 32767
short = 2
long_max = 9223372036854775807
long = 8
long_long_max = 9223372036854775807
long long = 8
*/
    return 0;
}