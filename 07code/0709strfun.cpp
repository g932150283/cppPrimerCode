#include<iostream>
using namespace std;
unsigned int c_in_str(const char * str, char ch);

int main(){

    char mmm[50] = "afjsavsbcbbdjfdsaa";

    unsigned int as = c_in_str(mmm, 'a');
    unsigned int bs = c_in_str(mmm, 'b');

    cout << as << " a characters in  " << mmm << endl;
    cout << bs << " b characters in  " << mmm << endl;

    return 0;
}
unsigned int c_in_str(const char * str, char ch){
    unsigned int num = 0;
    while (*str)
    {
        if(*str == ch){
            num++;
        }
        str++;
    }
    return num;

}