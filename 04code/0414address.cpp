// address.cpp -- using the & operator to find addresses
/*
    计算机程序在存储数据时必须跟踪的3种基本属性
        信息存储位置
        值
        存储信息类型
*/
#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;
    
    cout << "value of donuts = " << donuts << endl;
    cout << "address of donuts = " << &donuts << endl;
    cout << "value of cups = " << cups << endl;
    cout << "address of cups = " << &cups << endl;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
// NOTE: you may need to use unsigned (&donuts)
// and unsigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    // cin.get();
    return 0; 
}
