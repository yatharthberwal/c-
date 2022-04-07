#include<iostream>
using namespace std;
int esum(int N){
	esum(N) = esum(N-1) + 2;
	return esum(N);
}

int main()
{
 	int N, sum =0, a=2;
    cout<<"enter the number"<<endl;
    cin>>N;
	esum(N);
    cout<<esum(N)<<endl;
}