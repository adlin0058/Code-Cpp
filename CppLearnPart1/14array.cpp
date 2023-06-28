#include <iostream>
using namespace std;
int main()
{
    double arr1[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    for (int i = 0; i < 9; i++)
    {
        cout << arr1[i] << endl;
    }
    cout << sizeof(arr1) << endl;
    cout << sizeof(arr1[0]) << endl;
    cout << arr1 << endl;
    system("pause");
    return 0;
}