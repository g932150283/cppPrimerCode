// use_new.cpp -- using the new operator
#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;         // allocate space for an int
    *pt = 1001;                 // store a value there

    // int * pt = new int;
    // 开辟新的内存空间给pt，所以pt的地址与nights的地址不同
    cout << "value of nights = " << nights << endl;
    cout << "address of nights = " << &nights << endl;
    cout << "value of pt = " << *pt << endl;
    cout << "address of pt = " << pt << endl;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double * pd = new double;   // allocate space for a double
    *pd = 10000001.0;           // store a double there

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    
    cout << "size of pt = " << sizeof pt << endl;
    cout << "size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd << endl;
    cout << "size of *pd = " << sizeof(*pd) << endl;

    // cin.get();
    return 0;
}
