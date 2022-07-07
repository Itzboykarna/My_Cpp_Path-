#include <iostream>
using namespace std;
void print (string s)
{
    cout<<s<<endl;
}
void print (int x)
{
    cout<<x<<endl;
}
//void print (char c)
//{
    //cout<<c<<endl;
//}
int main ()
{
    print ('a');
    print(10);
    print("GFG");
    return 0;
}