#include <iostream>

using namespace std;

int main(){
    int numCandles = 0;
    cin >> numCandles;
    
    int long heights[numCandles];
    int long highestCandle = 0;
    int long numBlown = 0;
    
    for (int index = 0; index  < numCandles; index ++){
        cin >> heights[index];
        if (heights[index] > highestCandle){
            highestCandle = heights[index];
        }
    }
    
    for (int index = 0; index < numCandles; index ++){
        if (heights[index] == highestCandle){
            numBlown ++;
        }
    }
    cout << numBlown;
}

