#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter the year\n";
    cin>>a;
    if (a%4==0)
    {
        cout<<"its leap year";
    }
    else
    cout<<"is not leap year";
    
    return 0;

}