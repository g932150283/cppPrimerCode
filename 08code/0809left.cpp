#include<iostream>
#include<cstring>
using namespace std;

const int ArSize = 80;

char * left(const char * str, int n = 1);

int main(){

    char sample[ArSize];
    cout << "Enter a string : " << endl;
    cin.get(sample, ArSize);
    char * ps = left(sample, 4);
    cout << ps << endl;
    cout << strlen(ps) << endl;
    delete [] ps;
    ps = left(sample);
    cout << ps << endl;
    cout << strlen(ps) << endl;
    delete [] ps;
    return 0;
}

char * left(const char * str, int n){
    if (n < 0){
        n = 0;
    }
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n; i++){
        p[i] = str[i];
    }
    while (i <= n)
    {
        p[i++] = '\0';
        /* code */
    }
    return p;
    
}