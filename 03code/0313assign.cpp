/*
    类型转换：
        不同算术类型进行赋值
            1. 值变为接受变量的类型
                long so_long 和 short thirty
                so_long = thirty  
            2. boolean b = 0/1 ==> b为false or true
            3. {} 不允许缩窄，x也不可以，在编译器角度，x只是一个变量，其值可能很大
        表达式包含不同类型
            1. bool\char\unsigned char\signed char\short转换为int
                short chi = 20;
                short doc = 12;
                short fowl = chi + doc;
                第三行执行过程为 获取chi和doc的值并将其转换为int，然后程序将结果转换为short
                int 为计算机最自然的类型，运算速度最快
        参数传递给函数
        强制类型转换
            不会改变变量本身，而是创建一个新的、指定类型的值
            static_cast<>比传统强制类型转换更严格

*/
#include <iostream>
int main()
{
    using namespace std;
    //统一输出格式
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;     // int converted to float
    int guess = 3.9832; // float converted to int
    int debt = 7.2E12;  // result not defined in C++
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    // cin.get();
    return 0;
}