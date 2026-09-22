/*
老師有一張成績表，橫的是 N 位學生、直的是 M 個科目，表格裡是每位學生每科的分數。

現在老師想把表格「行列對調」：改成橫的是科目、直的是學生。也就是說，原本第 i 位學生第 j 科的分數，在新表裡要變成第 j 列第 i 個。

請你輸出這張對調後的新表格。

Input
第一行兩個整數 N 和 M，滿足 1 ≤ N, M ≤ 500。接下來 N 行，每行有 M 個整數，第 i 行第 j 個為 aij，滿足  - 109 ≤ aij ≤ 109，同行以空格分隔。

Output
輸出 M 行，每行有 N 個整數。新表第 j 行第 i 個為原表的 aij，同行以空格分隔。*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,m;
    cin >> n >> m;
    int a[n][m] = {};
    int b[m][n] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}