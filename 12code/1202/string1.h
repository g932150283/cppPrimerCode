#ifndef STRING1_H_
#define STRING1_H_
#include<iostream>
using namespace std;
class String{
    private:
        char * str;
        int len;
        static int num_strings;
        // cin input limit
        static const int CINLIM = 80; 
    public:
        String(const char * s);
        String();
        // 复制构造函数
        String(const String &);
        ~String();
        int length() const {
            return len;
        }
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;

        friend bool operator<(const String &st1, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st1, const String &st2);
        friend ostream & operator<<(ostream & os, const String &st);
        friend istream & operator>>(istream & is, String &st);

        static int HowMany();
};
#endif