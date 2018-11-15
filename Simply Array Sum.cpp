#include <iostream>

using namespace std;

int main(){

    int numElements = 0, sum = 0;
    cin >> numElements;

    int ar[numElements];

    for (int i = 0; i < numElements; i++){
        cin >> ar[i];
        sum += ar[i];
    }

    cout << sum;

}