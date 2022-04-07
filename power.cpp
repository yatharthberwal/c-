#include <iostream>
using namespace std;
int power(int x, int n)
{
    int output;
    if(n==0){
        return 1;
    }
    output = x*power(x,n-1);
    return output;
}
int main()
{
    system("cls");
    int x, n;
    cin >> x;
    cin >> n;
    cout<<power(x, n);
    
}