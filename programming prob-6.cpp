#include<iostream>
using namespace std;
int main() {
	int num,factorial=1;
	cout<<" Enter Number To Find Its Factorial:  ";
	cin>>num;
	for (int i=1;i<=num;i++) {
		factorial=factorial*i;
	}
	cout<<"Factorial of Given Number is ="<<factorial<<endl;
	return 0;
}
