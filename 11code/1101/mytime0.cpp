#include<iostream>
#include"mytime0.h"

using namespace std;

Time::Time(){
    hours = minutes = 0;
}

Time::Time(int h, int m){
    hours = h;
    minutes = m;
}

void Time::AddMin(int m){
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;

}

void Time::AddHr(int h){
    hours += h;
}

void Time::Reset(int h, int m){
    hours = h;
    minutes = m;
}

Time Time::Sum(const Time & t) const{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator+(const Time & t) const{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time & t) const{
    Time diff;
    int m1 = minutes + 60 * hours;
    int m2 = t.minutes + 60 * t.hours;
    int res = m1 - m2;
    diff.minutes = res % 60;
    diff.hours = res / 60;
    return diff;
}

Time Time::operator*(double n) const{
    Time res;
    int m = minutes * n + 60 * hours * n;
    res.minutes = m % 60;
    res.hours = m / 60;
    return res;
}

void Time::Show() const{
    cout << hours << " hours, " << minutes << " minutes" << endl;
}