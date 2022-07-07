#include <iostream>
using namespace std;
int main ()
{
    int option,a,b;
    cout<<"Enter your choice : \n 1 for addition \n 2 for substraction \n 3 multiplication\n";
    cin>>option>>a>>b;
    switch(option)
    {
        case 1 : cout<<a+b;
        break;
        case 2 : cout<<a-b;
        break;
        case 3: cout<<a*b;
        break;
        default : cout<<"invalid input";

}
return 0;
}