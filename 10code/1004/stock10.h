#ifndef STOCK10_H_
#define STOCK01_H_

#include<string>
using namespace std;
class Stock{
    private:
        string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot(){
            total_val = share_val * shares;
        }
    public:
        Stock();
        Stock(const string & co, long n = 0, double pr = 0.0);
        ~Stock();
        // void acquire(const string & co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};
#endif