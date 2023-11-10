#include <iostream>
using namespace std;

int main() {

    int row;
    cout << "Input number of rows (half of the diamond): ";
    cin >> row;

    for(int i = 1; i <= row; i++){
        for(int j = row; j > i; j--){
            cout << " ";
        }
        for(int k = 0; k < (i*2-1); k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i < row; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int k = ((row-i)*2-1); k > 0; k--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

