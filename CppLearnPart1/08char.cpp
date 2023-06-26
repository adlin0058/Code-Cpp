#include <iostream>
using namespace std;
int main()
{
    char ch1 = 'Z';
    cout << ch1 << endl;
    cout << sizeof(ch1) << endl;

    // 查看对应的ASCII码
    cout << (int)ch1 << endl;

    /*
    a -> 97     z -> 122
    A -> 65     Z -> 90
    */
    system("pause");
    return 0;
}