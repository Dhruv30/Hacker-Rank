#include <bits/stdc++.h>
#include <iostream>

using namespace std;

const int MAX = 60;

int round(int grade){
    if (grade >= 38){
        if ((((grade/5)+1)*5) - grade < 3){
            return (((grade/5)+1)*5);
        }
    }
    return grade;
}

int main(){
    int numStu = 0;
    cin >> numStu;
    int grades[MAX];

    for (int index = 0; index < numStu; index ++) {
        cin >> grades[index];
        cout << round(grades[index]) << endl;
    }
}
