#include<iostream>
/*
    1. c++的模块
        函数
    2. #include<iostream>预处理器编译指令的目的是？
        包含iostream头文件，将头文件内容添加到源代码中
    3. using namespace std；作用？
        使用std命名空间，using是预编译器指令
    

*/
int stonetolb(int);

int main(){

    using namespace std;

    int weight;
    
    cout << "Enter weight : ";
    cin >> weight;
    
    int stone;
    stone = stonetolb(weight);
    cout << weight << " weight = " << stone << " stone " << endl;   
    return 0;

}


int stonetolb(int n){
    return n * 13;
}