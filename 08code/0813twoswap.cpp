#include<iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
    /* data */
};


template <> void Swap<job>(job &j1, job &j2);

void show(job &j);

int main(){
    job a ={"a", 1.1, 2};
    job b ={"b", 2.2, 1};
    Swap(a, b);
    show(a);
    show(b);
    return 0;
}

template <typename T>
void Swap(T &a, T &b){
    
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <> void Swap<job>(job &j1, job &j2){
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void show(job &j){
    cout << j.name << " : $ " << j.salary << " on floor " << j.floor << endl;
}
