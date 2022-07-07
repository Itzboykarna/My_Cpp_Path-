#include <iostream>
using namespace std;
int myMax(int x, int y)
{
    return(x>y)?x:y;
}
int myMax(int x, int y, int z)
{
    return myMax(myMax(x,y),z);
}
int main ()
{
    int a=10,b=30,c=5;
    cout<<myMax(a,b)<<"\n";
    cout<<myMax(a,b,c);
    return 0;
}