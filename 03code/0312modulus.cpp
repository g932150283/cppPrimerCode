#include <iostream>
int main()
{

    /*
        将磅转换为英石 1英石＝14磅
        代码为将磅转换为英石


    */


    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cin >> lbs;

    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;

    cout << lbs << "pounds = " << stone  << "stone, " << pounds << "pounds" << endl;




    // cout << "Enter your weight in pounds: ";
    // cin >> lbs;
    // int stone = lbs / Lbs_per_stn;      // whole stone
    // int pounds = lbs % Lbs_per_stn;     // remainder in pounds
    // cout << lbs << " pounds are " << stone
    //      << " stone, " << pounds << " pound(s).\n";
    // // cin.get();
    // // cin.get();
    return 0; 
}