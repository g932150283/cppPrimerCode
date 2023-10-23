#include<iostream>
#include<string>

using namespace std;

struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
    /* data */
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumlate(free_throws & target, const free_throws & source);

int main(){

    free_throws one = {"A", 13, 14};
    free_throws two = {"A", 10, 16};
    free_throws three = {"A", 7, 9};
    free_throws four = {"A", 5, 9};
    free_throws five = {"A", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};

    free_throws dup;

    set_pc(one);
    display(one);
    accumlate(team, one);
    display(team);

    display(accumlate(team, two));
    accumlate(accumlate(team, three), four);
    display(team);

    dup = accumlate(team, five);
    cout << "Displaying team : " << endl;
    display(team);
    cout << "Displaying dup : " << endl;
    display(dup);
    set_pc(four);

    accumlate(dup, five) = four;
    cout << "Displaying team (four) : " << endl;
    display(dup);
    // display(four);


    return 0;
}
void display(const free_throws & ft){
    cout << " name = " << ft.name << ", made = " << ft.made << ", attempt = " << ft.attempts <<
    ", percent = " << ft.percent << endl;
}
void set_pc(free_throws & ft){
    if(ft.attempts != 0){
        ft.percent = 100.0f * float(ft.made)/float(ft.attempts);
    }else{
        ft.percent = 0;
    }
}
free_throws & accumlate(free_throws & target, const free_throws & source){
    target.made += source.made;
    target.attempts += source.attempts;
    set_pc(target);
    return target;
} 