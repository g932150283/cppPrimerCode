#include<iostream>
#include"end.h"

End::End(){
    e = 0;
    n = 0;
}

End::End(double d){
    e = d;
    n = 0;
}

End::End(double d, int n){
    e = d;
    this->n = n;
}

End::~End(){
    std::cout << "end" << std::endl;
}

End::operator int() const{
    return n;
}

End::operator double() const{
    return e;
}

void End::show() {
    std::cout << "e = " << e << " , n = " << n << std::endl;
}