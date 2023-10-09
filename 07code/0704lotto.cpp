#include<iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);

int main(){

    double total, choices;
    cout << "Enter the total number of choices on the game card and the number of picks allowed : " << endl;
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "you have one chance in : ";
        cout << probability(total, choices) << " of winning" << endl;
        cout << "next tow number (q to quit)" << endl;
        /* code */
    }
    cout << "***********************" << endl;
    return 0;
}

long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    for (unsigned n = numbers, p = picks;p > 0;n--, p--){
        result = result * n / p;
    }
    return result;
}