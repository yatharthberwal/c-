#include <iostream>
using namespace std;
int print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
int increase(int *p){
    *p =*p+1;//value will change because the pointer from both the function are pointing to the same
    p=p+1;//no change will occur beacause the address of main function reamins the same
}
int main()
{
    int a=10;
    int *p=&a;
    print(p);//we can pass the data to other fn only thorugh their address so we have the address to the fn
    increase(p);//in case of array we just pass a and in case of variable we have to pass if though &
    cout<<p<<endl;
    cout<<*p<<endl;

}