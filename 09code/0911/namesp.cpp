#include<iostream>
#include"namesp.h"

namespace pers{
    using std::cout;
    using std::cin;
    using std::endl;

    void getPerson(Person & rp){
        cout << "Enter first name : " << endl;
        cin >> rp.fname;
        cout << "Enter last name : " << endl;
        cin >> rp.lname;
    }

    void showPerson(const Person & rp){
        cout << rp.lname << " , " << rp.fname << endl;
    }
}

namespace debts{
    using std::cout;
    using std::cin;
    using std::endl;

    void getDebt(Debt & rd){
        getPerson(rd.name);
        cout << "Enter debt : " << endl;
        cin >> rd.amount;
    }

    void showDebt(const Debt & rd){
        showPerson(rd.name);
        cout << " : $  " << rd.amount << endl;
    }

    double sumDebts(const Debt ar[], int n){
        double total = 0;
        for (int i = 0; i < n; i++){
            total += ar[i].amount;
        }
        return total;
    }
}