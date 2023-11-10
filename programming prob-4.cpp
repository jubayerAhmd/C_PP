#include<iostream>
using namespace std;
int main() {
	int first_number;
	cout<<"Enter First Number : ";
	cin>>first_number;
	int  second_number;
	cout<<"Enter Second Number: ";
	cin>>second_number;
	int  gcd;
	for (int i=1;i<=first_number&&i<=second_number;i++) {
		if(first_number%i==0 && second_number%i == 0 ) {
			gcd=i;
		}
	}
	cout<<"Greatest Common Divison (GCD):"<<gcd<<endl;
	return 0;
}
