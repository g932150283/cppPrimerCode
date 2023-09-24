#include<iostream>
using namespace std;

struct inflatable
{
    /* data */
    string name;
    float volume;
    double price;
};

int main(){

    inflatable guest = {
        "tom",
        1.22,
        2.22
    };

    inflatable pal = {
        "jam",
        3.22,
        432
    };

    cout << &guest << endl;
    cout << guest.name << endl;
    cout << &pal << endl;
    cout << pal.name << endl;
    
    pal.name = pal.name + guest.name;
    cout << &(pal.name) << endl;
    cout << pal.name << endl;

    pal.volume = pal.volume + guest.volume;
    cout << &(pal.volume) << endl;
    cout << pal.volume << endl;
    return 0;
}
