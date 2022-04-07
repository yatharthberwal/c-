#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    cout<< a<<endl;//in a array 'a' store the address of base element
    cout<< &a<<endl;
    cout<< &a[0]<<endl;
    cout<< *a<<endl;// *a = a[0]
    cout<< *(a+1)<<endl;// *(a+1) = a[1]
    cout<< a[0]<<endl;
    cout<< a[1]<<endl;   
}