#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{

float m,h,BMI;

cout<<"What is Mass : "<<endl;
cin>>m;
cout<<"What is Hight(ft) : "<<endl;
cin>>h;
h=h*0.3048;

BMI= m/(h*h);
cout<< round(BMI);

getch();

}
