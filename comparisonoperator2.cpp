#include<iostream> 
using namespace std;
int  main ()
{
    int x=10,y=20;
    auto res = x<=y;
    if (res<0)
    cout<<"x is less";
    else if (res>0)
    cout<<"x is  maxe";
    else cout <<"x is same";
    return 0;
}