#include<iostream>
#include<math.h>
using namespace std;
int main() {

int a[10], n, i;
cout<<"Input a decimal number: ";

cin>>n;
for(i=0; n>0; i++)

{
    a[i] = n%2;
    n=n/2;
}
 cout<<"The binary number is:";
 for (i=i-1; i>=0 ; i--)

{
    cout<<a[i];
}


return 0;

}
