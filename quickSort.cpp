#include <iostream>

using namespace std;
void sort(int input[], int size, int s, int l)
{
    if(size<1){
        return;
    }
    int b = 0, x, z,y=0;
    for (int i = 1; i <= l; i++)
    {
        if (input[s] > input[i])
            b++;
    }
    x = input[b];
    input[b] = input[s];
    input[s] = x;
    for (int i = 0; i < b; i++)
    {
        for (int j = b + 1; j <= l; j++)
        {
                if(input[i]>input[b]&&input[j]<input[b]){
                    z=input[i];
                    input[i]=input[j];
                    input[j]=z;
                }
        }
    }
    sort(input,size-b,s,b-1);
    sort(input+b+1,b-l,b+1,l);
}
void quickSort(int input[], int size)
{
    sort(input, size, 0, size - 1);
    return;
}
int main()
{
    system("cls");
    int size;
    cout << "enter the size if array\n";
    cin >> size;
    int *input = new int[size];
    cout << "enter the elements\n";
    for (int j = 0; j < size; j++)
    {
        cin >> input[j];
    }
    quickSort(input, size);
    cout<<"sorted array\n";
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
}