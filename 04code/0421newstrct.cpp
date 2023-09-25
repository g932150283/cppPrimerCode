#include<iostream>
#include<string>
struct inflatable{
    // char name[20];
    std::string name;
    float volume;
    double price;
};

int main(){

    using namespace std;
    inflatable * ps = new inflatable;
    cout << "Enter name of inflatable item: " << endl;
    // cin.get(ps->name, 20);
    cin >> ps->name;
    cout << "Enter volume of inflatable item: " << endl;
    cin >> (*ps).volume;
    cout << "Enter price of inflatable item: " << endl;
    cin >> ps->price;

    cout << "Name = " << ps->name << endl;
    cout << "Volume = " << ps->volume << endl;
    cout << "Price = " << ps->price << endl;

    delete ps;
    return 0;
}