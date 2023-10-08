#include<iostream>
using namespace std;

const int Max = 5;

int main(){

    int golf[Max];
    int i;
    for (i = 0; i < Max; i++){
        cout << "round #" << i+1 << " : ";
        while (!(cin >> golf[i]))
        {
            /* code */
            //先重置，后删除
            cin.clear();
            while (cin.get()!='\n')
            {
                continue;
            }
            
            cout << "enter a number : " << endl;
        }
        
    }
    for (int j = 0;j < Max;j++){
        cout << "round #" << j+1 << ", score = " << golf[j] << endl;
    }
    return 0;
}