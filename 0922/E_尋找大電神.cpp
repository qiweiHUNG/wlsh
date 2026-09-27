/*
武林高中的段考成績出爐了，大家都在紛紛討論誰才是大電神。

但是武林高中處在平行時空，因此他們的學號從 1 到 109 都有可能出現。

請寫一個程式，找出全班最高分是多少，並依據輸入的順序，輸出所有拿到該最高分的同學學號與成績。

Input
第一行一個整數 N（1 ≤ N ≤ 105）。接下來 N 行，每行包含兩個整數 idi, scorei（1 ≤ idi ≤ 109，0 ≤ scorei ≤ 100），代表第 i 位同學的學號與成績。

Output
輸出若干行，每行兩個整數，代表最高分同學的學號與成績（中間以空格分隔），並依據輸入順序輸出。*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int mx = -1;
    vector <pair<long long,int>> x(n);
    for (int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        x[i] = {a,b};
        mx=max(mx,b);
    }
    for (int i=0;i<n;i++){
        if (x[i].second == mx){
            cout << x[i].first << " " << x[i].second << "\n";
        }
    }
    return 0;
}