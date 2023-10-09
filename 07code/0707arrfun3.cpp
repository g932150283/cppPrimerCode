#include<iostream>

using namespace std;

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(){

    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0){
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; Please enter a number : ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done" << endl;
    return 0;
}

int fill_array(double ar[], int limit){
    double temp;
    int i;
    for (i = 0; i < limit; i++){
        cout << "Enter value #" << i + 1 << " : ";
        if(!(cin >> temp)){
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; input process terminated" << endl;
            break;
        }else if(temp < 0){
            break;
        }else{
            ar[i] = temp;
        }
    }
    return i; 
}

void show_array(const double ar[], int n){
    cout << "show begin" << endl;
    for (int i = 0; i < n; i++){
        cout << "value #" << i + 1 << " : " << ar[i] << endl;
    }
    cout << "show end" << endl;
}

void revalue(double r, double ar[], int n){
    for (int i = 0; i < n; i++){
        ar[i] = ar[i] * r;
    }
}