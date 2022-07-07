#include <iostream>
using namespace std;
int getmax(int x,int y)
{
    if (x>y)
    return x;
    else 
    return y;
}
int main ()
{
    int a,b;
    cin>>a>>b;
    cout<<getmax(a,b);
    return 0;
}