// 老師要做一張 N × N 的乘法表當作教具。

// 這張表共有 N 行，第 i 行有 N 個數字，第 i 行的第 j 個數字是 i × j，同一行的數字之間以一個空格分隔。請你根據給定的 N，把整張乘法表印出來。

// Input
// 一行一個整數 N，滿足 1 ≤ N ≤ 1000。

// Output
// 輸出 N 行，第 i 行有 N 個數字，第 i 行第 j 個為 i × j，同一行以空格分隔。
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            cout << (i+1)*(j+1) << " ";
        }
        cout << endl;
    }
    return 0;
}