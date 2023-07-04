// 通讯录管理系统
#include <iostream>
using namespace std;
#define MAX 1000

// 联系人结构体
struct Person
{
    string name;
    int gender; // 1为男、2为女
    int age;
    string phone;
    string addr;
};

// 通讯录结构体
struct AddressBooks
{
    int number; // 通讯录中人员个数
    Person personArray[MAX];
};

// 菜单功能
void showMenu()
{

    cout << "*******************\n"
         << "***1、添加联系人***\n"
         << "***2、显示联系人***\n"
         << "***3、删除联系人***\n"
         << "***4、查找联系人***\n"
         << "***5、修改联系人***\n"
         << "***6、清空联系人***\n"
         << "***0、退出通讯录***\n"
         << "*******************\n"
         << endl;
}

// 实现添加联系人
void addPerson(AddressBooks *abs)
{
    // 如果通讯录已满
    if (abs->number == MAX)
    {
        cout << "通讯录已满！" << endl;
    }
    else
    {
        // 添加联系人
        // 姓名
        // 性别
        // 年龄
        // 电话
        // 住址
    }
}

int main()
{

    int select = 0;
    while (true)
    {
        // 菜单调用
        showMenu();
        cout << "请选择：" << endl;
        cin >> select;
        switch (select)
        {
        case 1: // 1、添加联系人
            break;
        case 2: // 2、显示联系人
            break;
        case 3: // 3、删除联系人
            break;
        case 4: // 4、查找联系人
            break;
        case 5: // 5、修改联系人
            break;
        case 6: // 6、清空联系人
            break;
        case 0: // 0、退出通讯录
            cout << "欢迎下次使用！" << endl;
            system("pause");
            return 0;
            break;
        default:
            cout << "请重新输入：" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}