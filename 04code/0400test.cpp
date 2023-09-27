#include<iostream>
#include<string>
#include<array>
using namespace std;
struct candybar
{
    /* data */
    string name;
    double d;
    double weight;
};


int main(){

    candybar * c = new candybar;
    // string name;
    // double d, weight;
    // cin >> d;
    // cin >> name;
    // cin >> weight;
    // c->d = d;
    // c->name = name;
    // c->weight = weight;
    // cout << "name = " << c->name << " , d = " << c->d << " , weight = " << c->weight << endl;

    candybar * c1 = new candybar[3];
    c1[0] = {"tom jam", 11, 22};
    cout << c1->name << endl;
    cout << c1[1].name << endl; 

    array<double, 3> run;
    run[0] = 1;
    cout << run[2] << endl;
    run[1] = 2;
    run[3] = 2;
    cout << run[2] << endl;

    return 0;
}