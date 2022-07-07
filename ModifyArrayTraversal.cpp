#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,40,30,45};
    int n = sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        arr[i]=arr[i]*2;
        for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
        
    return 0;
}