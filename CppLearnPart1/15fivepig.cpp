#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {300, 350, 250, 400, 250};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
    }
    cout << "体重最重为：" << max << "Kg" << endl;
    system("pause");
    return 0;
}