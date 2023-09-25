// pointer.cpp -- our first pointer variable
// 一定要在对指针应用接触引用运算符之前，将指针初始化为一个确定的、适当的地址。
#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;        // declare a variable
    int * p_updates;        // declare pointer to an int

    p_updates = &updates;   // assign address of int to pointer


    int i = 4;
    int* p_i;
    p_i = &i;

    cout << "value of i = " << i << endl;
    cout << "value of *p_i " << *p_i << endl;

    cout << "address of i = " << &i << endl;
    cout << "address of p_i " << p_i << endl;
    
    cout << "now, *p_i = 1" << endl;
    *p_i = 1;
    cout << "value of i = " << i << endl;

// express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

// express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

// use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    // cin.get();
    return 0; 
}
