#include<bits/stdc++.h>
#include"dma.h"

using namespace std;

baseDMA::baseDMA(const char * l, int r){ 
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

// 复制构造函数
baseDMA::baseDMA(const baseDMA & rs){
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

// 纯虚析构函数
baseDMA::~baseDMA(){
    delete [] label;
}

// 重载赋值运算符
baseDMA & baseDMA::operator=(const baseDMA & rs){
    if(this == &rs){
        return *this;
    }
    delete [] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

// 重载输出运算符，友元函数
std::ostream & operator<<(std::ostream & os, const baseDMA & rs){
    os << "Label : " << rs.label << endl;
    os << "Rating : " << rs.rating << endl;
    return os;
}


lacksDMA::lacksDMA(const char * c, const char * l, int r) : baseDMA(l, r){
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs) : baseDMA(rs){
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

// 重载输出运算符，友元函数
std::ostream & operator<<(std::ostream & os, const lacksDMA & ls){
    os << (const baseDMA &) ls ;
    os << "Color :" << ls.color << endl;
    return os;
}

hasDMA::hasDMA(const char * s, const char * l, int r) : baseDMA(l, r){
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}
hasDMA::hasDMA(const char * s, const baseDMA & rs) : baseDMA(rs){
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}
// 复制构造函数
hasDMA::hasDMA(const hasDMA & hs): baseDMA(hs){
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}
// 析构函数
hasDMA::~hasDMA(){
    // 自动调用基类析构函数
    delete [] style;
}
// 重载赋值运算符
hasDMA & hasDMA::operator=(const hasDMA & hs){
    if (this == &hs){
        return *this;
    }
    delete [] style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
    return *this;
}

// 重载输出运算符，友元函数
std::ostream & operator<<(std::ostream & os, const hasDMA & hs){
    os << (const baseDMA &) hs;
    os << "Style : " << hs.style << endl;
    return os;
}