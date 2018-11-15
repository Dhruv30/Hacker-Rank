#include <iostream>

using namespace std;

int main(){
    const int MAX = 100;
    int numElements = 0;
    double numPos = 0, numNeg = 0, numZero = 0;
    
    cin >> numElements;
    int ar[100] = {0};
    
    for (int i = 0; i < numElements; i++){
        cin >> ar[i];
        if (ar[i] > 0){
            numPos ++;
        }
        else if (ar[i] == 0){
            numZero ++;
        }
        else{
            numNeg ++;
        }
    }
    
    cout << numPos/(double)n << endl << numNeg / (double)n << endl << numZero/(double)n;
}