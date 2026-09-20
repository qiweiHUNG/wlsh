/*從遠處看一排大樓，我們想找出「特別突出」的那幾棟——一棟大樓如果比它左邊和右邊的鄰居都還要高（嚴格地高），就稱它為一個「山峰」。

最左邊和最右邊的大樓因為缺了一側的鄰居，一律不算山峰。

給你這排 N 棟大樓的高度，請算出總共有幾個山峰。

Input
第一行一個整數 N，滿足 1 ≤ N ≤ 105。第二行有 N 個整數，第 i 個為第 i 棟大樓的高度 hi，滿足  - 109 ≤ hi ≤ 109，以空格分隔。

Output
一行一個整數，代表山峰的數量。*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0 ; i < n ; i++){
        cin >> a[i] ;
    }
    int count = 0;
    for(int j = 1 ; j < n-1 ; j++){
        if (a[j]>a[j-1]&&a[j]>a[j+1]) count++;
    }
    cout << count;
}