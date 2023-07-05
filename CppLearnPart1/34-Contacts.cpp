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
        string name;
        cout << "姓名:" << endl;
        cin >> name;
        abs->personArray[abs->number].name = name;
        // 性别
        cout
            << "性别:" << endl;
        cout << "1--男    2--女" << endl;
        while (true)
        {
            int gender = 0;
            cin >> gender;
            if (gender == 1 || gender == 2)
            {
                abs->personArray[abs->number].gender = gender;
                break;
            }

            cout << "输入有误，请重新输入！" << endl;
        }
        // 年龄
        int age;
        cout << "年龄:" << endl;
        cin >> age;
        abs->personArray[abs->number].age = age;
        // 电话
        string phone;
        cout << "电话:" << endl;
        cin >> phone;
        abs->personArray[abs->number].phone = phone;
        // 住址
        string addr;
        cout << "住址:" << endl;
        cin >> addr;
        abs->personArray[abs->number].addr = addr;
        // 联系人数加一
        cout << "添加成功！" << endl;
        abs->number++;
    }
}

// 实现显示联系人
void showPerson(AddressBooks *abs)
{
    if (abs->number == 0)
    {
        cout << "暂无联系人！" << endl;
    }
    else
    {
        cout << "共有 " << abs->number << " 个联系人" << endl;
        cout << "姓名\t性别\t年龄\t电话\t\t住址\n";
        for (int i = 0; i < abs->number; i++)
        {
            // cout << "*******************\n";
            //  cout << "姓名： " << abs->personArray[i].name << endl;
            //  if (abs->personArray[i].gender == 1)
            //      cout << "性别： 男" << endl;
            //  if (abs->personArray[i].gender == 2)
            //      cout << "性别： 女" << endl;
            //  cout << "年龄： " << abs->personArray[i].age << endl;
            //  cout << "电话： " << abs->personArray[i].phone << endl;
            //  cout << "住址： " << abs->personArray[i].addr << endl;
            cout << abs->personArray[i].name << "\t";
            cout << (abs->personArray[i].gender == 1 ? "男" : "女") << "\t";
            cout << abs->personArray[i].age << "\t";
            cout << abs->personArray[i].phone << "\t";
            cout << abs->personArray[i].addr << endl;
        }
    }
}

// 实现查找联系人
void findPerson(AddressBooks *abs)
{
    if (abs->number == 0)
    {
        cout << "暂无联系人！" << endl;
        return;
    }
    cout << "请输入要查找的联系人:" << endl;
    string name;
    cin >> name;
    int num = -1;
    for (int i = 0; i < abs->number; i++)
    {
        if (abs->personArray[i].name == name)
        {
            num = i;
        }
    }
    if (num != -1)
    {
        cout << abs->personArray[num].name << "\t";
        cout << abs->personArray[num].gender << "\t";
        cout << abs->personArray[num].age << "\t";
        cout << abs->personArray[num].phone << "\t";
        cout << abs->personArray[num].addr << endl;
    }
    else
    {
        cout << "查无此人！" << endl;
    }
}

// 实现删除联系人
void deletePerson(AddressBooks *abs)
{
    if (abs->number == 0)
    {
        cout << "暂无联系人！" << endl;
        return;
    }
    cout << "请输入要删除的联系人:" << endl;
    string name;
    cin >> name;
    int num = -1;
    for (int i = 0; i < abs->number; i++)
    {
        if (abs->personArray[i].name == name)
        {
            num = i;
            break;
        }
        num = -1;
    }
    if (num == -1)
    {
        cout << "查无此人！" << endl;
    }
    else
    {
        for (int i = num; i < abs->number; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->number--;
        cout << "删除成功！" << endl;
    }
}

// 实现修改联系人
void modifyPerson(AddressBooks *abs)
{
    if (abs->number == 0)
    {
        cout << "暂无联系人！" << endl;
        return;
    }
    cout << "请输入要修改的联系人:" << endl;
    string name;
    cin >> name;
    int num = 0;
    for (int i = 0; i < abs->number; i++)
    {
        if (abs->personArray[i].name == name)
        {
            num = i;
            break;
        }
        num = -1;
    }
    if (num == -1)
    {
        cout << "查无此人！" << endl;
    }
    else
    {
        // 姓名
        string name;
        cout << "姓名:" << endl;
        cin >> name;
        abs->personArray[num].name = name;
        // 性别
        cout
            << "性别:" << endl;
        cout << "1--男    2--女" << endl;
        while (true)
        {
            int gender = 0;
            cin >> gender;
            if (gender == 1 || gender == 2)
            {
                abs->personArray[num].gender = gender;
                break;
            }

            cout << "输入有误，请重新输入！" << endl;
        }
        // 年龄
        int age;
        cout << "年龄:" << endl;
        cin >> age;
        abs->personArray[num].age = age;
        // 电话
        string phone;
        cout << "电话:" << endl;
        cin >> phone;
        abs->personArray[num].phone = phone;
        // 住址
        string addr;
        cout << "住址:" << endl;
        cin >> addr;
        abs->personArray[num].addr = addr;
        // 联系人数加一
        cout << "修改成功！" << endl;
    }
}

// 实现清空联系人
void clearPerson(AddressBooks *abs)
{
    while (true)
    {
        cout << "确定要清空联系人吗？" << endl;
        cout << "1--确定" << endl;
        int select = 0;
        cin >> select;
        if (select == 1)
        {
            abs->number = 0;
            cout << "已清空！" << endl;
            break;
        }
        else
            return;
    }
}

int main()
{

    // 创建并初始化通讯录结构体变量
    AddressBooks abs;
    abs.number = 0;

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
            addPerson(&abs);
            break;
        case 2: // 2、显示联系人
            showPerson(&abs);
            break;
        case 3: // 3、删除联系人
            deletePerson(&abs);
            break;
        case 4: // 4、查找联系人
            findPerson(&abs);
            break;
        case 5: // 5、修改联系人
            modifyPerson(&abs);
            break;
        case 6: // 6、清空联系人
            clearPerson(&abs);
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
        system("pause");
        system("cls");
    }
    system("pause");
    return 0;
}