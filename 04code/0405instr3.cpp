// instr3.cpp -- reading more than one word with get() & get()
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize); 
    // cin.get(name, ArSize).get();    // read string, newline
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize); 
    // cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
    return 0; 
}
/*
生活步步高，好运天天交
好事都成双，每年都风光
一杯金两倍银三杯喝出聚宝盆，
万事吉祥万事如意万事都赚人民币
东方送你摇钱树，西方送你永安康，
南方送你成功路，北方送你钱满仓
满桌沾光，端杯，好运堆成堆
六六大顺多挣钱，心情阳光灿烂，未来风光无限
七星高照好旺运，齐心协力，各显神通
888 fff 999 yyy 8989越过越有 9898 越过越发
不求长生不老，但愿人长久，千里共平安
十全十美在人间，工作生活顺风又顺水
一日千里迎风帆
两袖清风坐高官
三帆五跃创大业
四季发财财路宽
五湖四海交贵友
六六大顺多挣钱
七星高照交旺运
八方进宝堆成山
九子登科传后代
十全十美在人间


酒为欢伯 除忧来乐
财神天天追着你 幸福永远陪着你 
快乐永远伴着你 病魔一世躲着你
万事事事顺着你 
*/