#include"brass.h"
#include<iostream>

using namespace std;


Brass::Brass(const string & s, long an, double bal) : fullName(s), acctNum(an), balance(bal){}

// 存款
void Brass::Deposit(double amt){
    balance += amt;
}
void Brass::Withdraw(double amt){
    if(balance - amt >= 0){
        balance -= amt;
    }else{
        cout << "余额不足，取款失败" << endl;
    }
}
double Brass::Balance() const{
    return balance;
}
void Brass::ViewAcct() const{
    cout << "姓名为：" << fullName << "账户为： " << balance << "余额为: " << balance << endl;
}




BrassPlus::BrassPlus(const string & s , long an, double bal, 
    double m, double r) : Brass(s, an, bal), maxLoan(m), rate(r){}

BrassPlus::BrassPlus(const Brass & ba, 
    double m, double r) : Brass(ba), maxLoan(m), rate(r){}
void BrassPlus::Withdraw(double amt){
    if(Balance() - amt >= 0){
        Brass::Withdraw(amt);
    }else{
        amt -= Balance();
        Brass::Withdraw(Balance());
        if(amt > maxLoan){
            cout << "取款失败" << endl;
        }else{
            oweBank = amt * rate;
            maxLoan -= amt;
        }
    }
}
void BrassPlus::ViewAcct() const{
    Brass::ViewAcct();
    cout << "欠款为: " << oweBank << ", 利率为: " << rate << endl;
}