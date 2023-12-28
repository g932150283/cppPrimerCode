#ifndef WORKER0_H_
#define WORKER0_H_

#include<bits/stdc++.h>
using namespace std;

// ABC 抽象基类
class Worker
{
private:
    string fullname;
    long id;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Worker() : fullname("no one"), id(0L){}
    Worker(const string & s, long n) : fullname(s), id(n){}

    // 纯虚函数
    virtual ~Worker() = 0;
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class Waiter : virtual public Worker{
    private:
        int panache;
    protected:
        void Data() const;
        void Get();
    public:
        Waiter() : Worker(), panache(0){}
        Waiter(const string & s, long n, int p = 0) : Worker(s, n), panache(p){}
        Waiter(const Worker & worker, int p = 0) : Worker(worker), panache(p){}
        void Set();
        void Show() const;
};

class Singer : virtual public Worker{
    protected:
        enum{other, al, con, sop, bass, bar, tenor};
        enum{Vtypes = 7};
        void Data() const;
        void Get();
    private:
        static char *pv[Vtypes];
        int voice;
    public:
        Singer() : Worker(), voice(other){}
        Singer(const string & s, long n, int v = other) : Worker(s, n), voice(v){}
        Singer(const Worker & worker, int v = other) : Worker(worker), voice(v){}
        void Set();
        void Show() const;
};

class SingingWaiter : public Singer, public Waiter{
    protected:
        void Data() const;
        void Get();
    public:
        SingingWaiter(){}
        SingingWaiter(const string & s, long n, int p = 0, int v = other) : 
            Worker(s, n), Waiter(s, n, p), Singer(s, n, v){}
        SingingWaiter(const Worker & worker, int p = 0, int v = other) : 
            Worker(worker), Waiter(worker, p), Singer(worker, v){}
        SingingWaiter(const Waiter & waiter, int v = other) : 
            Worker(waiter), Waiter(waiter), Singer(waiter, v){}
        SingingWaiter(const Singer & singer, int p = 0) : 
            Worker(singer), Waiter(singer, p), Singer(singer){}
        void Set();
        void Show() const;
};



#endif