#include <iostream>
#include <cstring>
using namespace std;
int main()
{
system("cls");
string s="yatharth";
string s1;
cout<<s<<"\nenter the word\n";
cin>>s1;
string *s2=new string;
*s2="  love  ";
string s3=s+*s2+s1;
cout<<s3<<endl;
cout<<s3.size()<<endl;//use to find the size of string
cout<<s3.substr(10,4)<<endl;/*from where you want to start*/   /*how many*/
cout<<s3.find("bhavya");//provide the starting index of that word
}