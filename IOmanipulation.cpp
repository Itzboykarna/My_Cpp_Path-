#include <iostream>
using namespace std;
int main ()
{
    bool a = true;
    cout<<a<<endl;
    cout<<std::boolalpha;
    cout<<a<<endl;
    cout<<std::noboolalpha;
    cout<<a;
    return 0;
}
