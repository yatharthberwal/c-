#include <iostream>
using namespace std;
int fab(int x){
    if(x<4){
        return 1;
    }
    int output= fab(x-1)+fab(x-2);
    return output;
}
int main()
{
    int index;
    cout<<"enter the index"<<endl;
    cin>>index;
    cout<<fab(index);
    
}