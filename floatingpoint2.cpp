#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    cout<<std::setprecision(4);
    double  x=15.5683,y=34267.1;
    cout<<x<<" "<<y<<"  ";
    double z =1.23;
    cout<<std::showpoint<<z<<"\n";
    cout<<std::showpos<<z<<"\n";
    cout<<std::uppercase<<y<<"\n";
    return 0;
}
