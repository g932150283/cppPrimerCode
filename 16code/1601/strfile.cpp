#include<bits/stdc++.h>

using namespace std;

int main(){

    ifstream fin;
    fin.open("/home/user/wsl-code/cppPrimerPlus/16code/1601/tobuy.txt");
    if(fin.is_open() == false){
        cerr << "can not open file" << endl;
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin){
        count++;
        cout << count << " : " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done " << endl;
    fin.close();
    return 0;
}