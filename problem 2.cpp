#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    int *arr = new int[N + 1];
    for(int i = 0; i < N; i++){
        cin >> *(arr + i);
    }

    for(int i = 0; i < N; i++){
        int number = arr[i], sumOfDivisors = 0;

        for(int j = 1; j < number; j++){
            if(number%j==0) sumOfDivisors = sumOfDivisors + j;
        }

        cout << number <<  ((number == sumOfDivisors) ? " is a perfect number" : " is not a perfect number") << endl;
    }


    return 0;
}

