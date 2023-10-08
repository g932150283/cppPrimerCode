#include<iostream>
#include<fstream>

using namespace std;

int main(){

    char automobile[50];
    int year;
    double a_price;
    double b_price;

    ofstream outFile;
    outFile.open("carinfo.txt");

    cout << "model of automobile : ";
    cin.getline(automobile, 50);
    cout << "model year : ";
    cin >> year;
    cout << "original asking price : ";
    cin >> a_price;
    b_price = 0.3 * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model : " << automobile << endl;
    cout << "year : " << year << endl;
    cout << "was asking : " << a_price << endl;
    cout << "now asking : " << b_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model : " << automobile << endl;
    outFile << "year : " << year << endl;
    outFile << "was asking : " << a_price << endl;
    outFile << "now asking : " << b_price << endl;
    outFile.close();
    return 0;
}