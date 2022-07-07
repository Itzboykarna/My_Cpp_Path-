#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"Enter three number :    ";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    cout<<a<<" is largest one";
    else if (b>a&&b>c)
        cout<<b<<" is largest one";
    else
    cout<<c<<" is largest one";
    return 0;
}