#include <iostream>
int main()
{
    /*
        字符串常量 ""  字符变量 ''
    */

    using namespace std;

    char dog[3] = {'a', 'b', 'c'};
    char cat[3] = {'a', 'b', '\0'};


    cout << dog << endl;
    cout << cat << endl;

    //字符串常量、字符串字面值
    char bird[11] = "Mr. Cheeps";
    char fish[] = "Bubbles";

    cout << bird << endl;
    cout << bird[3] << endl;
    cout << fish << endl;

    // char shirt_size = "S";        // not allowed
    // cout << shirt_size << endl;
 
    return 0;
}