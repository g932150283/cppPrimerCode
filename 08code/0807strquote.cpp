#include<iostream>
#include<string>
using namespace std;

string version(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2);

int main(){

    string input, copy, result;

    cout << "Enter a string : ";
    getline(cin, input);
    copy = input;
    cout << " input = " << input << endl;
    cout << " copy = " << copy << endl;
    // cout << " address of input = " << &input << endl;
    // cout << " address of copy = " << &copy << endl;
    result = version(input, "***");
    cout << "result = " << result << endl;
    cout << " input = " << input << endl;

    result = version2(input, "###");
    cout << "result = " << result << endl;
    cout << " input = " << input << endl;

    input = copy;
    result = version3(input, "@@@");
    cout << "result = " << result << endl;
    cout << " input = " << input << endl;

    return 0;
}

string version(const string & s1, const string & s2){
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}
const string & version2(string & s1, const string & s2){
    s1 = s2 + s1 + s2;
    return s1;
}
const string & version3(string & s1, const string & s2){
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}