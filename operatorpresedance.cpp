#include <iostream>
using namespace std;
int main ()
{
  int  x=10,y=20;
  int z = x+x*y;
    cout<<z<<"\n";
    z=y/x*x;
    cout<<z<<"\n";
    z=y=x;
    cout<<y<<"\n"<<z<<endl;
    return 0;

}