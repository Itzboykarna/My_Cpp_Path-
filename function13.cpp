#include <iostream>
using namespace std;
void fun (int id,string name="NA");
int main ()
{
    fun(101);
    return 0;
}
void fun (int id , string name)
{
    cout<<id<<"   "<<name;
}