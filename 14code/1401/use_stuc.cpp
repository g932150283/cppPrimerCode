#include<bits/stdc++.h>
#include"studentc.h"

using namespace std;

void initializeStudent(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main(){
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};

    for(int i = 0; i < pupils; i++){
        initializeStudent(ada[i], quizzes);
    }
    cout << "\n Student List: \n";
    for(int i = 0; i < pupils; i++){
        cout << ada[i].Name() << endl;
    }
    cout << "\nResults:\n";
    for(int i = 0; i < pupils; i++){
        cout << ada[i] << " average : " << ada[i].Average() << endl;
    }
    cout << "Done " << endl;
    return 0;
}

void initializeStudent(Student & sa, int n){
    cout << " Please enter the student's name: " ;
    getline(cin, sa);
    cout << " Please enter " << n << " quiz scores:\n";
    for(int i = 0; i < n; i++){
        // 重载[] 运算符
        cin >> sa[i];
    }
    while (cin.get() != '\n'){
        continue;
    }
    
}