#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 integer ";
    cin>>a>>b;


    if(a%2==0)
        cout<<a<<" is even"<<endl;

    else

        cout<<a<<" is odd"<<endl;


    if(b%2==0)
        cout<<b<<" is even"<<endl;

    else
        cout<<b<<" is odd"<<endl;


    if(a>b)
        cout<<a<<" is the maximum number"<<endl;

    else
        cout<<b<<" is the maximum number"<<endl;


    return 0;
}
