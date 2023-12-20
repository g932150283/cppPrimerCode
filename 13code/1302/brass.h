#ifndef BRASS_H_
#define BRASS_H_
#include<string>
using namespace std;

class Brass
{
private:
    string fullName;
    long acctNum;
    double balance;
public:
    Brass(const string & s = "NullBody", long an = -1, double bal = 0.0);
    // 存款
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass() {}
};

class BrassPlus : public Brass
{
private:
    double maxLoan;  // 借款上线
    double rate;     // 借款利率
    double oweBank = 0;  // 欠银行钱
public:
    BrassPlus();
    BrassPlus(const string & s = "NullBody", long an = -1, double bal = 0.0,
        double m = 500, double r = 0.11125);
    BrassPlus(const Brass & ba, double m = 500, double r = 0.11125);  
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    void ResetMax(double m){
        maxLoan = m;
    }
    void ResetRate(double r){
        rate = r;
    }
    void ResetOwes(){
        oweBank = 0;
    }
};

#endif