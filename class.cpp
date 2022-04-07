#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    int num;
    cout << "select your grade\n";
    cout << "1)O\n2)A+\n3)A\n4)B+\n5)B\n6)C+\n7)C\n";
    cin >> num;
    cout<<num<<endl;
    //system("cls");
    cout<<"switch case\n";
    switch (num)
    {
    case 1:
        cout << "excellent\n";
        break;
    case 2:
        cout << "very good\n";
        break;
    case 3:
        cout << "good\n";
        break;
    case 4:
        cout << "nice\n";
        break;
    case 5:
        cout << "need to improve\n";
        break;
    case 6:
        cout << "poor\n";
        break;
    case 7:
        cout << "very poor\n";
        break;
    default:
        break;
    }
    cout<<"if else\n";
    if (num == 1)
    {
        cout << "excellent\n";
    }
    if (num == 2)
    {
        cout << "very good\n";
    }
    if (num == 3)
    {
        cout << "good\n";
    }
    if (num == 4)
    {
        cout << "nice\n";
    }
    if (num == 5)
    {
        cout << "need to improve\n";
    }
    if (num == 6)
    {
        cout << "poor\n";
    }
    if (num == 7)
    {
        cout << "very poor\n";
    }
}