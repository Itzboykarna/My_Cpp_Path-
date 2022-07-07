#include<iostream>
using namespace std;
bool check_if_sorted(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < arr[i-1])
        return false;
    }
    return true;
}
int main () {
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(check_if_sorted(arr,n)==false)
    cout<<"Not Sorted";
    else
    cout<<"sorted";
    return 0;
    
}
