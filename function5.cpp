#include <iostream>
using namespace std;
void fun2 ()
{
    cout<<"Inside fun2()\n";
}
void fun ()
{
    cout<<"Before fun2()\n";
    fun2();
    cout<<"After fun2 ()\n";
}
int main ()
{
    cout<<"Bfore fun ()\n";
    fun();
    cout<<"After fun ()\n";
    return 0;
}