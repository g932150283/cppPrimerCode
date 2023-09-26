#include <iostream>
using namespace std;
struct antarctica_years_end
{
    /* data */
    int year;
};

int main(){

    antarctica_years_end s01, s02, s03;
    s01.year = 1221;
    antarctica_years_end * p2 = &s02;
    p2->year = 1222;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout << "trio->year = " << trio->year << endl;

    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << "arp[0]->year = " << arp[0]->year << endl;
    cout << "arp[1]->year = " << arp[1]->year << endl;
    cout << "arp[2]->year = " << arp[2]->year << endl;

    //指向指针的指针
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;
    cout << "(*ppa)->year = " << (*ppa)->year << endl;
    cout << "(*ppb)->year = " << (*ppb)->year << endl;
    cout << "(*(ppb + 1))->year = " << (*(ppb + 1))->year << endl;
    return 0;
}
