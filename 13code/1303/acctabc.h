#ifndef ACCTABC_H_
#define ACCTABC_H_

#include<iostream>
#include<string>
using namespace std;
class AcctABC
{
private:
    string fullName;
    long acctNum;
    double balance;
protected:
    // 格式控制
    struct Formatting{
        ios_base::fmtflags flag;
        streamsize pr;
    };
    // 返回姓名
    const string & FullName() const {
        return fullName;
    }
    // 返回账号
    long AcctNum() const{
        return acctNum;
    }
    Formatting SetFormat() const;
    void Restore(Formatting & f) const; 
public:
    AcctABC(const string & s = "NullBody", long an = -1, double bal = 0.0);
    // 存款
    void Deposit(double amt);
    // 返回余额
    double Balance() const {
        return balance;
    }
    // 取款 纯虚函数
    virtual void Withdraw(double amt) = 0;
    // 显示账户信息 纯虚函数
    virtual void ViewAcct() const = 0;
    virtual ~AcctABC(){}
};


class Brass : public AcctABC
{
public:
    Brass(const string & s = "NullBody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal){}
    // 取款 虚函数
    virtual void Withdraw(double amt);
    // 显示账户信息 虚函数
    virtual void ViewAcct() const;
    virtual ~Brass(){}
    
};

class BrassPlus : public AcctABC
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const string & s = "NullBody", long an = -1, double bal = 0.0, 
                double ml = 500, double r = 0.1);
    BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
    // 取款 虚函数
    virtual void Withdraw(double amt);
    // 显示账户信息 虚函数
    virtual void ViewAcct() const;
    // 最大值、利率、欠款
};



#endif