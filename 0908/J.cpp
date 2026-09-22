/*
教室的座位排成 N 排、每排 M 個位子，每個位子上的同學都有一個分數。

導師想知道每一排的總分是多少，好比較哪一排整體表現最好。請你算出每一排（由第 1 排到第 N 排）的分數總和。

Input
第一行兩個整數 N 和 M，滿足 1 ≤ N, M ≤ 500。接下來 N 行，每行有 M 個整數，第 i 行第 j 個為第 i 排第 j 個位子的分數，滿足  - 109 ≤ aij ≤ 109，同行以空格分隔。

Output
輸出 N 行，第 i 行為第 i 排的分數總和。
*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,m ;
    cin >> n >> m;
    vector <long long> a(n);
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            long long b;
            cin >> b;
            a[i] += b;
        }
    }
    for (int q = 0 ; q < n ; q++){
        cout << a[q] << "\n";
    }
    return 0;
}