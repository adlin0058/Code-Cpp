// 全局函数做友元
#include <iostream>
using namespace std;

class Building
{
    // 使goodGay函数作为友元
    friend void goodGay(Building *b);

public:
    Building()
    {
        LivingRoom = "客厅";
        BedRoom = "卧室";
    }
    string LivingRoom;

private:
    string BedRoom;
};

void goodGay(Building *b)
{
    cout << "好基友正在访问 " << b->LivingRoom << endl;
    // 友元可以访问私有属性
    cout << "好基友正在访问 " << b->BedRoom << endl;
}

int main()
{
    Building building;
    goodGay(&building);
    system("pause");
    return 0;
}