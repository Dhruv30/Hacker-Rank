#include <iostream>

using namespace std;

int main(){
    int lowestSum = 1E20, greatestSum = 0;
    int ar[5] = {0};
    
    for(int i = 0; i < 5; i ++){
        cin >> ar[i];
    }
    
    for (int dontCount = 0; dontCount < 5; dontCount ++){
        
        int tempSum = 0;
        
        for (int index = 0; index < 5; index ++){
            if (index != dontCount){
                tempSum += ar[index];
            }
        
        }
         if (tempSum > greatestSum) {
                greatestSum = tempSum;
            }
            if (tempSum < lowestSum){
                lowestSum = tempSum;
            }
    }
    
    cout << lowestSum << " " << greatestSum;
}