#ifndef WORKER0_H_
#define WORKER0_H_

#include<bits/stdc++.h>
using namespace std;
class Worker
{
private:
    string fullname;
    long id;
public:
    Worker() : fullname("no one"), id(0L){}
    Worker(const string & s, long n) : fullname(s), id(n){}

    // 纯虚函数
    virtual ~Worker() = 0;
    virtual void Set();
    virtual void Show() const;
};

class Waiter : public Worker{
    private:
        int panache;
    public:
        Waiter() : Worker(), panache(0){}
        Waiter(const string & s, long n, int p = 0) : Worker(s, n), panache(p){}
        Waiter(const Worker & worker, int p = 0) : Worker(worker), panache(p){}
        void Set();
        void Show() const;
};

class Singer : public Worker{
    protected:
        enum{other, al, con, sop, bass, bar, tenor};
        enum{Vtypes = 7};
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





#endif