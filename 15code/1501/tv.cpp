#include"tvfm.h"
#include<bits/stdc++.h>
using namespace std;
bool Tv::volup(){
    if(volume < MaxVal){
        volume++;
        return true;
    }
    return false;
}
bool Tv::voldowm(){
    if(volume > MinVal){
        volume--;
        return true;
    }
    return false;
}
void Tv::chanup(){
    if (channel < maxchannel){
        channel++;
    }else{
        channel = 1;
    }
}
void Tv::chandowm(){
    if (channel > 1){
        channel--;
    }else{
        channel = maxchannel;
    }
}
void Tv::settings() const{
    
    cout << "TV is " << (state == off ? "off" : "on") << endl;
    if(state == on){
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
    }
}