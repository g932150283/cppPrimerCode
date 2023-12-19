#include<iostream>
#include<cstdlib>
#include<ctime>
#include"queue.h"
using namespace std;
const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(){
    srand(time(0));

    cout << "Case Study : Back of Heather Automatic Teller" << endl;
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);
    // cout << line.isempty();
    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;

    cout << "Enter the average number of customers per hour: ";
    double perhour;
    cin >> perhour;
    double min_per_cust;
    // 每分钟有多少顾客
    min_per_cust = MIN_PER_HR / perhour;
    
    Item temp;
    long turnaways = 0; // 因队列已满而被拒之门外
    long customers = 0; // 队列中的人数
    long served = 0;    // 模拟期间服务
    long sum_line = 0;  // 累积线长度
    int wait_time = 0;  // 距离自动柜员机空闲的时间
    long line_wait = 0; // 累计排队时间
    // int total = 0;
    for (int cycle = 0; cycle < cyclelimit; cycle++){
        if(newcustomer(min_per_cust)){
            if (line.isfull()){
                turnaways++;
            }else{
                customers++;
                temp.set(cycle); // cycle = arrival 到达时间
                line.enqueue(temp);
            }
            // cout << cycle << " 时刻到达 " << ++total << " 名customer" << endl;
        }
        if(wait_time <= 0 && !line.isempty()){
            line.dequeue(temp);
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }
        if(wait_time > 0){
            wait_time--;
        }
        sum_line += line.queuecount();
    }

    if(customers > 0){
        cout << "customer accepted: " << customers << endl;
        cout << " customers served: " << served << endl;
        cout << "        turnaways: " << turnaways << endl;
        cout << "avarage queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << "average wait time: " << (double) line_wait / served << " miunutes" << endl;
    }else{
        cout << "No customers" << endl;
    }
    cout << "Done" << endl;
    return 0;
}


bool newcustomer(double x){
    return (rand() * x / RAND_MAX < 1);
}