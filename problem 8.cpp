#include <iostream>

using namespace std;

int main() {

    int counter = 0;
    cout << "The three-digit numbers are:" << endl;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
            for(int k = 1; k <=4; k++){
                if(i!=j && i!=k && j!=k){
                    cout << i << j << k << " ";
                    counter = counter + 1;
                }
            }
        }
    }

    cout << endl << "Total number of the three-digit-numbers are: " << counter << endl;



    return 0;
}

