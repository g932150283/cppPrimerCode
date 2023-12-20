#include<iostream>
#include"tabtenn1.h"

using namespace std;

void show(const TableTennisPlayer & ttp);

int main(){
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(10, "Mallory", "Duck", true);
    RatedPlayer rplayer2(20, "2Mallory", "2Duck", true);
    TableTennisPlayer & ttp = rplayer1;
    TableTennisPlayer * ttp1 = &rplayer2;
    ttp.Name();
    ttp1->Name();
    show(ttp);
    return 0;
}

void show(const TableTennisPlayer & ttp){
    cout << "Name: " ;
    ttp.Name();
    if(ttp.HasTable()){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}