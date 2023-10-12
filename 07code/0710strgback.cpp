#include<iostream>
using namespace std;

char * builstr(char c, int n);
int main(){

    int time;
    char ch;
    // cout << "Enter a character : ";
    // cin >> ch;
    // cout << "Enter an integer : ";
    // cin >> time;
    ch = 'a';
    time =9;
    char *ps = builstr(ch, time);
    cout << ps << endl;
    delete [] ps;
    ps = builstr('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;

    return 0;
}

char * builstr(char ch, int time){
    char * pstr = new char[time+1];
    pstr[time] = '\0';
    while (time-- > 0)
    {
        /* code */
        pstr[time] = ch;
    }
    return pstr;
    
}