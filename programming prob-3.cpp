#include<iostream>
using namespace std;
int main() {

int number, sum = 0, remainder;
cout<<"Enter a Positive number:"<<endl;
cin>>number;

while (number>0) {

    remainder = number %10;
    sum = sum + remainder;
    number = number /10;
}

cout<<"sum of digits is:"<<sum;
 return 0;
}
