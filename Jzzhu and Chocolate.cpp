//WRONG on Test Case 7
// Can't get the Long Long to work

#include <bits/stdc++.h>
using namespace std;
//#define ll long long
//const int MX = 2e5 + 1;

long long ans, total, row, col, cuts;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> row >> col >> cuts;

    if  (cuts > (row + col - 4)){
        cout << -1 << endl;
        return 0;
    }

    //Brute Force all options
    long long temp = 0;
    if (row > col){
        temp = col;
        col = row;
        row = temp;
    }
    for (long long real = 1; real * real <= row ; real++){
//        cout << real << endl;
        long long x = row / real;
        long long y = cuts + 2 - x;
        if (x <= 0 or y <= 0){
            continue;
        }
        temp = (row / x) * (col / y);
        ans = max(temp, ans);
        cout << x << " " << y << " " << temp << endl;
    }
//    cout << cuts << endl;
//    for (int x = 1; x * x < row; x++){
//        int y = (cuts + 2) - x;
//        cout << x << " " << y << endl;
//        temp = (row / x) * (col / y);
//        ans = max(temp, ans);
//    }
    cout << ans << endl;
}






