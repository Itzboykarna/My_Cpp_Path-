#include <iostream>
using namespace std;
void fun()
{
    cout<<"fun()called\n";
}
int main ()
{
    cout<<"beforecalling fun ()\n";
    fun ();
     fun ();
    cout<<"after calling fun\n";
    return 0;
}