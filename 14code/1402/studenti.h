#ifndef STUDENTC_H_
#define STUDENTC_H_

#include<bits/stdc++.h>
using namespace std;

class Student : private string , private valarray<double>
{
private:
    /* data */
    typedef valarray<double> ArrayDb;
    // 私有继承，类将继承实现。获得实现，但不获得接口
    // 将对象作为一个未被命名的继承对象添加到类中
    // string name;
    // ArrayDb scores;
    ostream & arr_out(ostream & os) const;
public:
    Student() : string("Null Student"), ArrayDb(){}
    explicit Student(const string & s) : string(s), ArrayDb(){}
    explicit Student(int n) : string("Nully"), ArrayDb(n){}
    Student(const string & s, int n) : string(s), ArrayDb(n){}
    Student(const string & s, ArrayDb a) : string(s), ArrayDb(a){}
    Student(const char * str, const double * pd, int n) : string(str), ArrayDb(pd, n){}
    ~Student(){}
    double Average() const;
    const string & Name() const;
    // 是否允许修改
    /*
    在常量版本的重载运算符 [] 中返回值为值而不是引用，
    是因为常量成员函数承诺不修改对象的状态。
    当我们声明一个成员函数为常量成员函数时，
    它告诉编译器该函数不会修改调用它的对象的数据成员。

    如果常量版本的 operator[] 返回引用，
    那么用户可以通过该引用修改对象的数据成员，
    违反了常量成员函数的承诺。
    为了确保常量成员函数的行为符合其声明，我们将返回值设置为值而不是引用。
    */
    double & operator[](int i);
    double operator[](int i) const;

    // 友元函数，重载运算符
    friend istream & operator>>(istream & is, Student & stu);
    friend istream & getline(istream & is, Student & stu);
    friend ostream & operator<<(ostream & os, const Student & stu);
};



#endif