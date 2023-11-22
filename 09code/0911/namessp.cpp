#include<iostream>
#include"namesp.h"

void other();
void another();

int main(){
    using debts::Debt;
    using debts::showDebt;
    Debt golf = {{"A", "B"}, 3.2};
    showDebt(golf);
    other();
    another();
    return 0;
}

void other(){
    using namespace std;
    using namespace debts;
    Person dg = {"Dood", "Glis"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for(i = 0; i < 3; i++){
        getDebt(zippy[i]);
    }

    for(i = 0; i < 3; i++){
        showDebt(zippy[i]);
    }

    cout << "Total debt = $ " << sumDebts(zippy, 3) << endl;

}

void another(){
    using pers::Person;
    Person collector = {"Milo", "Right"};
    pers::showPerson(collector);
    std::cout << std::endl; 
}