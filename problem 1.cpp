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
        int number = arr[i];
        bool isPrime = true;

        if(number == 0 || number == 1) isPrime = false;

        for(int i = 2; i <= number/2; i++){
            if(number%i==0){
                isPrime = false;
                break;
            }
        }

        cout << number << " is "<< (isPrime ? "" : "not ") <<"a prime number" << endl;
    }


    return 0;
}

