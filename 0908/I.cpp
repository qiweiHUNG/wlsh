/*手搖飲店有 K 種飲料，編號 1 到 K。今天總共有 N 位客人，每人各點了一杯（用飲料編號表示）。

打烊後老闆想做統計：請你依編號 1 到 K 的順序，輸出每一種飲料today各被點了幾杯。就算某種飲料一杯都沒賣出去，也要老實印出 0。

Input
第一行兩個整數 N 和 K，滿足 1 ≤ N ≤ 105，1 ≤ K ≤ 105。第二行有 N 個整數，第 i 個為第 i 位客人點的飲料編號 ci，滿足 1 ≤ ci ≤ K，以空格分隔。

Output
輸出 K 行，第 v 行為編號 v 的飲料被點的杯數。*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,k;
    cin >> n >> k;
    int a[k] = {} ;
    int b;
    for (int i =0 ;i<n;i++){
        cin >> b;
        a[b-1]++;
    }
    for (int j =0 ;j<k;j++){
        cout << a[j] << endl;
    }
}