#include<iostream>
#include<string>

int main(){

    using namespace std;
    string name = "namespace";
    int i,j;

    for (j = 0, i = name.size()-1; j < i; i--, j++){
        char temp = name[j];
        name[j] = name[i];
        name[i] = temp; 
    }

    cout << name << endl;


    return 0;
}