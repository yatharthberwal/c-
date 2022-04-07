#include <iostream>
using namespace std;
/*int main()
{
    system("cls");
    int n;
    cout<<"enter the number of task\n";
    cin>>n;
    int *t = new int[n];
    cout<<"enter the processing time for each task\n";
    int a,j;
    for(int i = 0;i<n;i++){
        cin>>t[i];
    }
    int st[n], total = 0, pos, temp;
    for (int i = 0; i < n; i++)
    {
        pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (t[j] < t[pos])
                pos = j;
        }

        temp = t[i];
        t[i] = t[pos];
        t[pos] = temp;

        temp = st[i];
        st[i] = st[pos];
        st[pos] = temp;
    }
    int *wt=new int[n];
    float avgwt=0;
    int *tat= new int[n];
    float avgtat=t[0];
    wt[0]=0;
    tat[0]=t[0];
    
    for(int i=1;i<n;i++){
        wt[i]=wt[i-1]+t[i-1];
        avgwt=avgwt+wt[i];
    }
    cout<<"average waiting time is "<<avgwt/n<<endl;
    for(int i = 1; i<n;i++){
        tat[i]=tat[i-1]+t[i];
        avgtat=avgtat+tat[i];
    }
    cout<<"average turn around time is "<<avgtat/n;
}*/
int main()
{
    system("cls");
    int a[10], b[10], x[10], i, j, smallest, count = 0, time, n;
    double avg = 0, tt = 0, end;
    cout<<"Enter the number of Processes\n";
    cin>>n;
    cout<<"Enter arrival time: \n";
    for (i = 0; i < n; i++)
        cin>>a[i];
    cout<<"Enter burst time: \n";
    for (i = 0; i < n; i++)
        cin>>b[i];
    for (i = 0; i < n; i++)
        x[i] = b[i];

    b[9] = 9999;

    for (time = 0; count != n; time++)
    {
        smallest = 9;
        for (i = 0; i < n; i++)
        {
            if (a[i] <= time && b[i] < b[smallest] && b[i] > 0)
                smallest = i;
        }
        b[smallest]--;
        if (b[smallest] == 0)
        {
            count++;
            end = time + 1;
            avg = avg + end - a[smallest] - x[smallest];
            tt = tt + end - a[smallest];
        }
    }
    cout<<"Average waiting time "<< avg/n<<endl;
    cout<<"Average Turnaround time "<< tt/n<<endl;
}