#include <iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p = 10;
    cout<<*p<<endl;
    char *c = new char;
    *c='a';
    cout<<*c<<endl;
    int n;
    int *arr=new int[5];
    arr[0]=5;
    arr[1]=6;
    arr[2]=7;
    arr[3]=8;
    arr[4]=9;
    for(int i =0;i < 5; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    //how to get the size of array from user
    int m;
    cout<<"enter the size of array\n";
    cin>>m;
    int *b=new int[m];
    cout<<"enter the elements\n";
    for(int j =0;j<m;j++){
        cin>>b[j];
    }
    cout<<"your array is\n";
    for(int k = 0;k<m;k++){
        cout<<b[k]<<"  ";
    }
    delete []arr;
}