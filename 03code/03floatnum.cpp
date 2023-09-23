/*
    非零值位true
    常量被初始化之后，值被固定，编译器不允许在修改该常量的值
    const--限定符，限制了声明的含义，声明中对const进行初始化
*/
#include<iostream>

using namespace std;

int main(){

    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    // float 精度丢失
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub << "\na million tubs = " << million * tub
        << "\nten million tubs = " << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = " <<  million * mint << endl; 
/*
    tub = 3.333333
    a million tubs = 3333333.250000
    ten million tubs = 33333332.000000
    mint = 3.333333 and a million mints = 3333333.333333    
*/
    return 0;
}