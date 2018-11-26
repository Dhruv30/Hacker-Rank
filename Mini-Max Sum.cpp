#include <iostream>

using namespace std;

void sort(long long int ar[5]);

int main(){
    long long int arr[5] = {0};
    
    for(int i = 0; i < 5; i ++){
        cin >> arr[i];
    }
    
    sort(arr);

    long long int sum = 0;

    for (int index = 0; index < 5; index ++){
        sum += arr[index];
    }

    long long int lowestSum = sum - arr[4];
    long long int highestSum = sum - arr[0];

    cout << lowestSum << " " << highestSum;


}

void sort(long long int ar[5]){
    
    for(int pass = 0; pass < 4; pass ++)
    {
        long long int minNum = ar[pass];
        int minIndex = pass;

        for(int index = pass + 1; index < 5; index ++)
        {
            if (ar[index] < minNum)
            {
                minNum = ar[index];
                minIndex = index;
            }
        }

        ar[minIndex] = ar[pass];
        ar[pass] = minNum;
    }
}
