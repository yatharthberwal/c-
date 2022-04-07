#include <iostream>
using namespace std;
bool checkPalindrome(string input)
{
    // Write your code here
    int i = 0, j;
    j = input.size() - 1;
    while (i < j)
    {

        if (input[i] != input[j])
        {
            return false;
        }

        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    system("cls");
    string input;
    cout << "enter the word\n";
    cin >> input;
    int x=checkPalindrome(input);
    if(x==0){
        cout<<"no\n";
    }
    if(x==1){
        cout<<"yes\n";
    }
}