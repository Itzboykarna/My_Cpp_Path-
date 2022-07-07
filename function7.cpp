#include <iostream>
using namespace std;
void printdetails(int id,string name ="NA",string address ="NA")
{
    cout<<"Id is "<<id<<"\n";
    cout<<"Name is "<<name<<"\n";
    cout<<"Address is "<<address<<"\n";
}
int main ()
{
    printdetails(101,"Sandip","Noida");
    cout<<"\n";
    printdetails(201,"Shivam");
    cout<<"\n";
    printdetails(301);
    return 0;
}