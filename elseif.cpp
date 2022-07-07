#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"ENTER THE NUMBER";
    cin>>n;
    if (n>0)
    {
        cout<<"POSITIVE";
    }
    else if (n<0)
    {
    cout<<"NEGATIVE";
    }
    else
    {
        cout<<"ZERO";
    }
    return 0;
}