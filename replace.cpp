#include <iostream>
using namespace std;
void replaceCharacter(char input[], char c1, char c2) {
    if(input[0]=='\0')
        return;
            
            
    if(input[0]==c1){
        input[0] =c2;
        }
    replaceCharacter(input+1,c1,c2);
}
int main()
{
    system("cls");
    char input[5], c1, c2;
    cout<<"enter the word\n";
    cin >> input;
    cout<<"enter the alphabat which you want to replace and by whom\n";
    cin>>c1>>c2;
    replaceCharacter(input,c1,c2);
    cout<<input;
}