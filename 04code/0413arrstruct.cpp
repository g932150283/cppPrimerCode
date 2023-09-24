// arrstruc.cpp -- an array of structures
#include <iostream>
using namespace std;

struct inflatable
{
    /* data */
    string name;
    float volume;
    double price;
};
int main()
{
    inflatable guest[2] = {
        {"tom", 23, 2.3},
        {"jery", 2.3, 33.21}
    };



    cout << &guest << endl;
    cout << guest[0].name << endl;
    
    return 0; 
}
