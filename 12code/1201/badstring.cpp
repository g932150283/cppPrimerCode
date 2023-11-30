#include<iostream>
#include<cstring>
#include"badstring.h"



int StringBad::num = 0;

StringBad::StringBad(){
    len = 4;
    str = new char[len];
    strcpy(str, "C++");
    num++;
    std::cout << num << " : " << str << " default object created " << std::endl;
}

StringBad::StringBad(const char * s){
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num++;
    std::cout << num << " : " << str << " object created " << std::endl;
}

StringBad::~StringBad(){
    std::cout << num-- << " : " << str << " object deleted " << num << " left" << std::endl;
}

std::ostream & operator<<(std::ostream & os, const StringBad & s) {
    os << s.str;
    return os;
}

void StringBad::show(){
    std::cout << str << std::endl;
}