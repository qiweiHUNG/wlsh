// 資訊社開學第一天，社長阿凱要幫社員編號。社團裡總共有 N 位社員，他決定從 1 號開始，一路念到 N 號，每念一個號碼就請那位社員舉手。

// 請你幫阿凱把他要念的號碼由小到大、一行一個印出來。

// Input
// 一行一個整數 N，滿足 1 ≤ N ≤ 105。

// Output
// 輸出 N 行，第 i 行為數字 i。
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    for(int i=0; i<n ;i++){
        cout << i + 1<< endl;
    }
    return 0;
}