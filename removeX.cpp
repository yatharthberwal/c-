#include <iostream>
#include <cstring>
using namespace std;
void removeX(char input[]) {
    // Write your code here
    int i=0;
    if(input[0] =='x'){
		
        
        removeX(input);
    }
    else{
        removeX(input+1);
    }

}
int main()
{
system("cls");
char input[10];
cout<<"enter the word\n";
cin>>input;
removeX(input);
cout<<input;
}