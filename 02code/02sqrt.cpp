#include<iostream>
#include<cmath>
/*
    C++程序应当为程序中使用的每个函数提供原型。
        参数个数、参数类型、返回值类型
        加分号
        double sqrt(double);
    
    原型-描述函数接口，发送给函数的信息以及函数返回的信息
    定义-包含函数的代码

    库文件包含函数的编译代码
    头文件包含原型

    -lm 类库
*/

using namespace std;

int main(){

    double area;
    
    cout << "Enter your area: ";
    cin >> area;
    
    double side;
    side = sqrt(area);

    cout << "side = " << side << endl;
    
    return 0;
}