#include<iostream>
using namespace std;
struct travel_time
{
    /* data */
    int hours;
    int mins;
};

const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main(){
    travel_time t1 = {5, 45};
    travel_time t2 = {4, 55};

    travel_time trip = sum(t1, t2);

    cout << "Tow-day total : ";
    show_time(trip);

    travel_time t3 = {4, 32};
    cout << "Three-day total : ";
    show_time(sum(trip, t3));
    return 0;
}

travel_time sum(travel_time t1, travel_time t2){
    travel_time t3;
    t3.hours = t1.hours + t2.hours;
    t3.mins = t1.mins + t2.mins;
    return t3;
}
void show_time(travel_time t){
    int hour, mins;
    hour = t.hours + t.mins / Mins_per_hr;
    mins = t.mins % Mins_per_hr;
    cout << hour <<"Hours, " << mins << "Mins" << endl;
}
