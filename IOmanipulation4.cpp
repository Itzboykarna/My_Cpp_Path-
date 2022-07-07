#include <iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int a=12;
    cout<<std::setw(5);
     cout<<std::setfill('*');
    cout<<a<<"\n";
    cout<<std::setw(5);
    cout<<"Hii"<<"\n";
    cout<<std::left;
    cout<<std::setw(5);
    cout<<a<<"\n";
    return 0;
}
