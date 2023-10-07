#include<iostream>
using namespace std;

const int ArSize = 6;
int main(){

    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) "
        << "of\nyour neighbors. Program terminates "
        << "when you make\n" << ArSize << " sentries "
        << "or enter a negative value.\n";

    int i = 0;
    float temp;
    cout << "first value: ";
    cin >> temp;

    while (i < ArSize && temp >= 0)
    {
        naaq[i] = temp;
        ++i;
        if(i < ArSize){
            cout << "next value: ";
            cin >> temp;
        }
    }

    if (i == 0){
        cout << "no data--bye\n";
    }else{
        cout << "enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++){
            if (naaq[j] > you){
                ++count;
            }      
        }
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
            << "the new age than you do.\n";
    }
    

    return 0;
}