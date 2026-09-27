/*
老師有一串長度為 N
 的成績清單，因為發現部分成績低於 60
 分，決定將這些低於 60
 分的成績從清單中「刪除」，並依原順序輸出剩餘合格的成績與其總和。請用 'std::vector' 的動態特性（如 'push_back'）來處理這項操作。

Input
第一行一個整數 N
（1≤N≤105
）。第二行有 N
 個整數，第 i
 個整數 ai
 代表成績（0≤ai≤100
）。

Output
第一行輸出一個整數，代表剩餘合格成績的總和。 第二行輸出所有合格的成績，中間以空格分隔。若無合格成績，則第二行印出 '-1'。*/
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,b =0;
    cin >> n;
    vector<int> v;
    for (int i = 0;i<n;i++){
        int a;
        cin >> a;
        if ( a >= 60) v.push_back(a);
    }
    int x = v.size();
    for (int j= 0;j < x;j++){
        
        b += v[j];
    }
    cout << b << endl;
    if (x==0) {
        cout << "-1"<<" ";
        return 0;
    }
    for (int r= 0;r<x;r++){
        
        cout << v[r] << " ";
    }
    

    return 0;
}