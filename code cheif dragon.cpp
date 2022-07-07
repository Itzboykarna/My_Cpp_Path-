#include <iostream>
using namespace std;
int main (){
    int exam;
    cin>>exam;
    while(exam--){
    int x,y,z,p,q,r,s,t;
    cin>>x >>y>>z;
    cin>>p>>q>>r;

    s=x+y+z;
    t=p+q+r;
    if (s>t)
    {
        cout<<"Dragon"<<endl;
    }
    else if (t>s)
    {
        cout<<"Sloth"<<endl;
    }
    else
    {
        if(t==s)
        {
            if(x>p)
            {
                cout<<"Dragon"<<endl;
            }
            else if (p>x)
            {
                cout<<"Sloth"<<endl;

            }
            else{
                if(y>q)
                {
                    cout<<"Dragon"<<endl;
                
                }
                else if(q>y)

                {
                    cout<<"Slot"<<endl;
                }
                else
                cout<<"Tie"<<endl;
            }
        }
    }
}
return 0;
}