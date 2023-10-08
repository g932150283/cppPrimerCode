#include<iostream>
#include<fstream>

using namespace std;

const int SIZE = 60;
int main(){

    char filename[SIZE];
    ifstream inFile;
    cout << "Enter name of data file : ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open()){
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating" << endl;
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while (inFile.good())
    {
        /* code */
        ++count;
        sum += value;
        inFile >> value;
    }

    if (inFile.eof()){
        cout << "End of file reached" << endl;
    }else if(inFile.fail()){
        cout << "Input terminated by data mismatch" << endl;
    }else{
        cout << "Input terminated for unknown reason" << endl;
    }

    if(count == 0){
        cout << "no data processed" << endl;
    }else{
        cout << "Items read : " << count << endl;
        cout << "sum : " <<  sum << endl;
        cout << "Average : " << sum / count << endl;
    }
    
    inFile.close();

    return 0;
}