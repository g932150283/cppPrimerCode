#include <iostream> 
#ifndef BADSTRING_H_
#define BADSTRING_H_

class StringBad{
    private:
        char * str;
        int len;
        static int num;
    public:
        StringBad();
        StringBad(const char * s);
        ~StringBad();
        friend std::ostream & operator<<(std::ostream & os, const StringBad & s);
        void show();
};
#endif