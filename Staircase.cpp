#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int numElements = 0;
    cin >> numElements;
    int count = 1;

    do {
        string print = "";
        for (int i = 0; i < count; i++){
            print += "#";
        }     
        cout << setw(n) << print << endl;
        count ++;
            
    }
    while (count <= numElements);
}