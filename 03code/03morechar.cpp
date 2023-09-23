/*
    char 专门位存储字符（字母、数字）而设计
    \转义字符
*/
#include<iostream>

using namespace std;

int main(){
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch++;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Displaying char ch using cout.put(ch)" << endl;
    cout.put(ch);
    cout << endl;

    cout.put('!');
    cout << endl;
/*
    The ASCII code for M is 77
    Add one to the character code: 
    The ASCII code for N is 78
    Displaying char ch using cout.put(ch)
    N
    !
*/

    return 0;
}