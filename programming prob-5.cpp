#include<iostream>
using namespace std;

int main()
{
	int number, minimum, maximum, sum = 0;

	cout << "\nPlease Enter the Minimum Limit for Even Numbers  =  ";
	cin >> minimum;

	cout << "\nPlease Enter the Maximum Limit for Even Numbers  =  ";
	cin >> maximum;

	cout <<"\n\nEven Numbers between  " << minimum << " and " << maximum << " = ";
	for(number = minimum; number <maximum; number++)
	{
		if ( number % 2 == 0 )
		{
  			cout << number << " ";
			sum = sum + number;
		}
	}

	cout << "\nThe Sum of All Even Numbers from " << minimum << " to " << maximum << " = " << sum;

 	return 0;
}
