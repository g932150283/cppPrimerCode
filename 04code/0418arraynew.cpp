// arraynew.cpp -- using the new operator for arrays
#include <iostream>
int main()
{
    using namespace std;
    double * p3 = new double [3]; // space for 3 doubles
    p3[0] = 0.2;                  // treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;

    double* p4 = new double [4];
    for(int i = 0; i < 4; i++){
        p4[i] = i + 0.11;
    }

    cout << "p4 = " << p4 << endl;
    cout << "&p4 = " << &p4 << endl;
    cout << "p4[0] = " << p4[0] << endl;
    cout << "p4[1] = " << p4[1] << endl;
    cout << "p4[2] = " << p4[2] << endl;
    cout << "p4[3] = " << p4[3] << endl;

    cout << "*p4 = " << *p4 << endl;
    cout << "*(p4 + 1) = " << *(p4 + 1) << endl;
    cout << "*(p4 + 2) = " << *(p4 + 2) << endl;
    cout << "*(p4 + 3) = " << *(p4 + 3) << endl;

    p4 = p4 - 1;
    cout << "p4 = " << p4 << endl;
    cout << "&p4 = " << &p4 << endl;
    cout << "p4[0] = " << p4[0] << endl;
    cout << "p4[1] = " << p4[1] << endl;
    cout << "p4[2] = " << p4[2] << endl;
    cout << "p4[3] = " << p4[3] << endl;

    delete[] p4;

    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;                  // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;                  // point back to beginning
    delete [] p3;                 // free the memory
    // cin.get();
    return 0; 
}
