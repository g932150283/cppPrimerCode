#include"acctabc.h"
#include<iostream>
using namespace std;

AcctABC::AcctABC(const string & s, long an, double bal) : fullName(s), acctNum(an), balance(bal){
    
}

// 存款
void AcctABC::Deposit(double amt){
    cout << "AcctABC存款"  << endl;
}

// 取款 纯虚函数
void AcctABC::Withdraw(double amt){
    cout << "AcctABC取款"  << endl;
}

// 显示账户信息 纯虚函数
void AcctABC::ViewAcct() const{
    cout << "AcctABC显示账户信息"  << endl;
}

AcctABC::Formatting AcctABC::SetFormat() const{
    Formatting f;
    f.flag=cout.setf(ios_base::fixed,ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void AcctABC::Restore(Formatting & f) const{
    cout.setf(f.flag,ios_base::floatfield);
    cout.precision(f.pr);
} 

// Brass::Brass(const string & s, long an, double bal) : AcctABC(s, an, bal){}
    // 取款 虚函数
void Brass::Withdraw(double amt){
    AcctABC::Withdraw(amt);
    cout << "Brass取款"  << endl;
}
    // 显示账户信息 虚函数
void Brass::ViewAcct() const{
    AcctABC::ViewAcct();
    cout << "Brass显示账户信息"  << endl;
}


BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r) : AcctABC(s, an, bal), maxLoan(ml), rate(r){}
BrassPlus::BrassPlus(const Brass & ba, double ml, double r) : AcctABC(ba), maxLoan(ml), rate(r){}
    // 取款 虚函数
void BrassPlus::Withdraw(double amt){
    AcctABC::Withdraw(amt);
    cout << "BrassPlus取款"  << endl;
}
    // 显示账户信息 虚函数
void BrassPlus::ViewAcct() const{
    AcctABC::ViewAcct();
    cout << "BrassPlus显示账户信息"  << endl;
}