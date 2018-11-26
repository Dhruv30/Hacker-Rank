#include <iostream>

using namespace std;

int main(){
    double a = 0, b = 0, s= 0, t = 0;
    int m = 0, n = 0, totalApples = 0, totalOranges = 0;

    cin >> s >> t >> a >> b >> m >> n;

    double apples[m], oranges[n];

    for (int i = 0; i < m; i++){
        cin >> apples[i];
        if ((a + apples[i]) >= s && (a + apples[i]) <= t){
            totalApples ++;
        }
    }

    for (int i = 0; i < n; i++){
        cin >> oranges[i];
        if ((b + oranges[i]) >= s && (b + oranges[i]) <= t){
            totalOranges ++;
        }
    }
    cout << totalApples << endl << totalOranges;

return 0;

}