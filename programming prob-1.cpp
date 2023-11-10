#include<iostream>

using namespace std;

int main (){

    int i,n;
    cout<<"Enter a Number :";
    cin>> n;
    cout<<"Multiplication table for :" <<n<<endl;

    for (int i=1;i<=10;i++)
    {
        cout<< n <<" * "<< i<<" ** "<<n*i<<endl;
    }

return 0;
}
