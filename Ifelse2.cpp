//ifelse2
#include<iostream>
using namespace std;
int main () {
    cout<<"Enter your savings\n";
    int savings ;
    cin>>savings;
    if(savings>=5000) {
        cout<<"Assam\n";
    }
    else if (savings>=2000) {
        cout<<"Jampui\n";
    }
    else {
        cout<<"Agartala\n";
    }
}