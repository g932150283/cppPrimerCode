#include<iostream>
int main(){

    /*
        float c++只保证6位有效位

        setf成员函数用于修改结果的显示方式
        setf函数有两个原型：

            fmtflags setf(fmtflags flags);
            fmtflags setf(fmtflags flags, fmtflags mask);
            ios_base类有一个受保护的数据成员，其中的各位（flag）分别控制着格式化的各个方面，
                如基数{hex,oct,dec}，是否显示正数前面的+号，打开一个标志位就是设置该标志位，即设置为1；

            对于第一个原型fmtflags setf(fmtflags flags)就是设置相应的标志位，同时返回以前的标志参数；

            	ios_base::fixed	使用定点计数法，如1234.5
                ios_base::scientific	使用科学计数法，如1.2345e4
    */

    using namespace std;
    float hats, heads;

    cout << "origin " << endl;
    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;

    return 0;


}