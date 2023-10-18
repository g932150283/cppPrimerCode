#include<iostream>
using namespace std;
const int Len = 130;
const int Divs = 7;
void subdivide(char ar[], int low, int high, int level);

int main(){

    char ruler[Len];
    for (int i = 0; i < Len; i++){
        ruler[i] = ' ';
    }
    ruler[Len-1] = '\0';
    int low = 0;
    int high = Len - 2;
    ruler[low] = '|';
    ruler[high] = '|';
    cout << ruler << "-----0" << endl;

    for (int i = 0; i < 2; i++){
        subdivide(ruler, low, high, i+1);
        cout << ruler << "-----"<< i+1 << endl;
        for (int j = 1; j < high; j++){
            ruler[j] = ' ';
        }
    }
    return 0;
}
void subdivide(char ar[], int low, int high, int level){
    if(level == 0){
        return;
    }
    int mid = (low + high) / 2;
    ar[mid] = '|';
    // cout << ar << "-----level"<< level << endl;
    subdivide(ar, low, mid, level - 1);
    subdivide(ar, mid, high, level - 1);
}
