// 类做友元
#include <iostream>
using namespace std;

// 建筑物类
class Building
{
    //! 类作为友元
    friend class GoodGay;

private:
    string BedRoom;

public:
    Building();
    string LivingRoom;
};

//! 成员函数在外部实现

// Building构造函数实现
Building::Building()
{
    LivingRoom = "客厅";
    BedRoom = "卧室";
}

// GoodGay类
class GoodGay
{
public:
    GoodGay();
    void visit();
    Building *building;
};

// GoodGay构造函数实现
GoodGay::GoodGay()
{
    building = new Building;
}

// 好基友访问函数实现
void GoodGay::visit()
{
    cout << "好基友正在访问 " << building->LivingRoom << endl;
    cout << "好基友正在访问 " << building->BedRoom << endl;
}

// 测试函数
void test()
{
    GoodGay gg;
    gg.visit();
}

// 主函数
int main()
{
    test();
    system("pause");
    return 0;
}