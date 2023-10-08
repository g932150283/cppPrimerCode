#include<iostream>
using namespace std;

const int Max = 5;

int main(){

    double fish[Max];
    cout << "fish #1 :";
    int i = 0;
    while (i < Max && cin >> fish[i])
    {
        if (++i < Max){
            cout << "fish #" << i+1 << " :"; 
        }
    }
    for (int j = 0;j < i;j++){
        cout << "fish #" << j+1 << ", weight = " << fish[j] << endl;
    }

    
    

    return 0;
}