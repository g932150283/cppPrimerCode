#include<iostream>

using namespace std;

inline double f(double tf){
    return 5.0 * (tf - 32.0) / 9.0;
}

int main(){

    int n = 2;
    int & rn = n;
    cout << " n value and address: " << n << ", " << &n << endl;
    cout << " rn value and address: " << rn << ", " << &rn << endl;
    n = 3;
    cout << " n value and address: " << n << ", " << &n << endl;
    cout << " rn value and address: " << rn << ", " << &rn << endl;
    

    double tc = 21.5;
    double && rd1 = 7.07;
    double && rd2 = 1.8 * tc + 32.0;
    double && rd3 = f(rd2);

    cout << " tc value and address: " << tc << ", " << &tc << endl;
    cout << " rd1 value and address: " << rd1 << ", " << &rd1 << endl;
    cout << " rd2 value and address: " << rd2 << ", " << &rd2 << endl;
    cout << " rd3 value and address: " << rd3 << ", " << &rd3 << endl;
    /*
     tc value and address: 21.5, 0x7fffffffdb60
    rd1 value and address: 7.07, 0x7fffffffdb68
    rd2 value and address: 70.7, 0x7fffffffdb70
    rd3 value and address: 21.5, 0x7fffffffdb78
    */
    // cin.get();
    return 0;
}