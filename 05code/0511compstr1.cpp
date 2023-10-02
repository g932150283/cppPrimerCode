#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "zate"); ch++){
        cout << "word = " << word << endl;
        word[0] = ch;
    }
    cout << "word is " << word << endl;
    return 0;
}