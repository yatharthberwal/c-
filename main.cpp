#include <iostream>
using namespace std;
void update(int *p){
    *p=100; 
}
int main()
{
    char a='A';
    //explicit type cassting
    update((int*) &a);
    cout<<a<<endl;
}