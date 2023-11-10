#include <iostream>
using namespace std;

int main() {

    int num, factorial = 1;
    cout << "input a number to calculate factorial: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        factorial = factorial * i;
    }

    cout << "Factorial of " << num << " is " << factorial << endl;


    return 0;
}

