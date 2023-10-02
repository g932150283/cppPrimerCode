#include<iostream>
#include<ctime>

using namespace std;
int main(){

    float secs = 3.5;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start <delay)
    {
        /* code */
    }
    cout << "done\a\n";
    
    return 0;
}