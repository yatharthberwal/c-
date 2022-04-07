#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout<<"enter the number of rows and column\n";
    cin >> m >> n;
    int **arr = new int *[m];
    cout<< "enter the number\n";
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    for (int i = 0; i < m; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}