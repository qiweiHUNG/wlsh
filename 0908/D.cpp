// 數論課上，老師隨手在黑板寫下一個整數 N，問全班：「這個數是質數嗎？」

// 質數是指大於 1、且除了 1 和自己以外沒有其他因數的整數，例如 2, 3, 5, 7, 11 是質數，而 1, 4, 6, 9 不是。

// N 可能很大，光靠心算是來不及的。請你寫一支程式，判斷 N 是不是質數。

// Input
// 一行一個整數 N，滿足 2 ≤ N ≤ 109。

// Output
// 若 N 是質數，輸出 Yes；否則輸出 No。
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    if (n < 2) cout << "No";
    int i;
    for (i = 2; i*i <= n; i++) {
        if (n % i == 0) { 
            cout << "No";
            return 0; 
        }
    }

    cout << "Yes";

    
    return 0;
}
