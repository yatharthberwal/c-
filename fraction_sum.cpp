#include <iostream>
#include <cstring>
using namespace std;
class fraction
{
public:
    int num;
    int deno;
    fraction(int num, int deno)
    {
        this->num = num;
        this->deno = deno;
    }
    int simplyfy()
    {
        int hcf = 1;
        if (num > deno)
        {
            for (int i = 1; i < deno; i++)
                if (num % i == 0 && deno % i == 0)
                    hcf = i;
        }
        if (num < deno)
        {
            for (int i = 1; i < num; i++)
                if (num % i == 0 && deno % i == 0)
                    hcf = i;
        }
        this->num = num / hcf;
        this->deno = deno / hcf;
    }
    fraction add(fraction f2)
    {
        int d = deno * f2.deno;
        num = (d / deno) * num;
        f2.num = (d / f2.deno) * f2.num;
        num = num + f2.num;
        deno = d;
    }
    fraction sub(fraction f2)
    {
        int d = deno * f2.deno;
        num = (d / deno) * num;
        f2.num = (d / f2.deno) * f2.num;
        num = num - f2.num;
        deno = d;
    }
    fraction mutiply(fraction f2)
    {
        num = num * f2.num;
        deno = deno * f2.deno;
    }
    fraction divide(fraction f2)
    {
        num = num * f2.deno;
        deno = deno * f2.num;
    }
    void print()
    {
        system("cls");
        cout << "your answer is-\n"<< num << "/" << deno << endl;
    }
};
int main()
{
    system("cls");
    int n1, n2, d1, d2, c;
    cout << "enter the first fraction number\n";
    cin >> n1 >> d1;
    cout << "enter the second fraction number\n";
    cin >> n2 >> d2;
    fraction f1(n1, d1);
    fraction f2(n2, d2);
    f1.simplyfy();
    f2.simplyfy();
    cout << "1)add\n2)sub\n3)multiply\n4)divide\n";
    cin >> c;
    if (c == 1)
    {
        f1.add(f2);
        f1.simplyfy();
        f1.print();
    }
    if (c == 2)
    {
        f1.sub(f2);
        f1.simplyfy();
        f1.print();
    }
    if (c == 3)
    {
        f1.mutiply(f2);
        f1.simplyfy();
        f1.print();
    }
    if (c == 4)
    {
        f1.divide(f2);
        f1.simplyfy();
        f1.print();
    }
}