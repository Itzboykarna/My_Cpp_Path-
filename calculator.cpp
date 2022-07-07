#include <iostream>
using namespace std;
int main ()
{
    int option,a,b;
    cout<<"Enter your choice : \n 1 for addition \n 2 for substraction \n 3 multiplication";
    cin>>option>>a>>b;
    if (option==1)
    {
        cout<<a+b;
    }
    else if (option==2)
    {
        cout<<a-b;
    }
    else if (option==3)
    {
        cout<<a*b;
    }
    else 
    cout<<"invalid input";

}