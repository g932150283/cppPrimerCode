#include<iostream>
/*
    类： 数据 和 对数据可以进行哪些操作
    类是抽象，对象是实例化
    
    cout ostream
    cin  istream
    两个对象
    
    C++两种发送消息的方式：
        使用类的方法 本质为函数调用；
        重新定义运算符，如cin、cout   
*/
using namespace std;

int main(){
    int carrots;
    
    cout << "How many carrots do you have? " << endl;
    cin >> carrots;
    cout << "Here are two more. " << endl;
    carrots = carrots + 2;
    cout << "Now I have " << carrots << " carrots" << endl;

    return 0;
}