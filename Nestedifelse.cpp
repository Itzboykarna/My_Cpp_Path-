#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    if (n>0)
    {
        if (n%2==0)
        {
            cout<<"POSITIVE EVEN";
        }
        else
        cout<<"POSITIVE ODD";
        
    }
    else if (n<0)
    {
     if (n%2==0)
        {
            cout<<"NEGATIVE EVEN";
        }
        else
        cout<<"NEGATIVE ODD";
    }
    else
    {
        cout<<"ZERO";
    }
    return 0;
}