#ifndef DMA_H_
#define DMA_H_

class baseDMA{
    private:
        char * label;
        int rating;
    public:
        baseDMA(const char * l = "null", int r = 0);
        // 复制构造函数
        baseDMA(const baseDMA & rs);
        // 纯虚析构函数
        virtual ~baseDMA();
        // 重载赋值运算符
        baseDMA & operator=(const baseDMA & rs);
        // 重载输出运算符，友元函数
        friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

// 没有涉及动态内存分配
class lacksDMA : public baseDMA{
    private:
        enum {COL_LEN = 40};
        char color[COL_LEN];
        // 枚举
    public:
        lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
        lacksDMA(const char * c, const baseDMA & rs);
        // 重载输出运算符，友元函数
        friend std::ostream & operator<<(std::ostream & os, const lacksDMA & ls);
};

// 动态内存分配 虚函数、复制构造函数、重载赋值运算符
class hasDMA : public baseDMA{
    private:
        char * style;
    public:
        hasDMA(const char * s = "none", const char * l = "null", int r = 0);
        hasDMA(const char * s, const baseDMA & rs);
        // 复制构造函数
        hasDMA(const hasDMA & hs);
        // 析构函数
        ~hasDMA();
        // 重载赋值运算符
        hasDMA & operator=(const hasDMA & hs);
        // 重载输出运算符，友元函数
        friend std::ostream & operator<<(std::ostream & os, const hasDMA & hs);
};


#endif