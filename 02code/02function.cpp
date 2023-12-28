#include<iostream>

void simon(int n);

int main(){

    using namespace std;

    int times;
    
    cout << "Enter times : ";
    cin >> times;

    simon(times);

    return 0;

}


void simon(int n){
    using namespace std;

    cout << "touch your toes " << n << " times." << endl;
}