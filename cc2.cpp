#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test ;
    cin>>test;
    while(test--)
    {
        int n,x;
        cin>>n>>x;
        int fixed[n];
        for (int i= 0; 1<n; i++)
        {
            cin>>fixed[i];
        }
        sort (fixed,fixed+n);
        int sum = 0;
        int count = 0;
        for (int i=0;i<n;i++)
        {
            if (sum<x)
            {
                sum=sum+fixed[n -1-i];
                count++;
            }
            else {
                break;
            }

        }
        if (sum<x)
        {
            cout<<-1<<endl;
        }
        else {
            cout<<count<<endl;
        }


    }
    return 0;
} 