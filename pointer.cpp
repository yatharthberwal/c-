#include <iostream>
using namespace std;
int main()
{
    // & reference operator use to print the address of that variable
    // * dereference operator use to print the value of that variable toward which it points
    int a=10;
    int *p=&a;
    cout<<&p<<endl;//address of a
    cout<<p<<endl;//address of pointer p
    cout<<*p<<endl;//points toward a
    cout<<a<<endl;

    //pointer arthmatics

    *p = *p +1;//pints toward next
    cout<<*p<<endl;
    cout<<a<<endl;
    p=p+1;
    cout<<*p<<endl;//garbage value because p stores the address not a value
}