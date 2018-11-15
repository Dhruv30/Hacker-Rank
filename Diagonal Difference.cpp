#include <iostream>

using namespace std;

const int MAX = 100;

int main(){

    int numElements = 0;
    cin >> numElements;
    int ar[MAX][MAX];
    for (int i = 0; i < numElements; i++){
        for (int x = 0; x < numElements; x ++){
            cin >> ar[i][x];
        }
    }
    
    int sum1 = 0, sum2 = 0, g = n-1;
    
    for (int i = 0; i < numElements; i++){
        sum1 += ar[i][i];   
        sum2 += ar[i][g];
        g --;
    }
    
    cout << abs(sum2 - sum1);
    
}
