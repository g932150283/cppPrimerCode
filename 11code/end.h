#ifndef END_H_
#define END_H_
class End
{
private:
    /* data */
    double e;
    int n;
public:
    End(/* args */);
    End(double d);
    End(double d, int n);
    operator int() const;
    operator double() const;
    void show();
    ~End();
};


#endif