// 老師要把全班分組，規則很簡單：座號是偶數的同學一組。

// 現在有 N 位同學依序報出自己的座號（這間學校的座號規則很特別，甚至可能是負數）。請你數一數，其中有幾位同學的座號是偶數。

// Input
// 第一行一個整數 N，滿足 1 ≤ N ≤ 105。第二行有 N 個整數，第 i 個為 ai，滿足  - 109 ≤ ai ≤ 109，以空格分隔。

// Output
// 一行一個整數，代表偶數的個數。
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    int a;
    int c=0;
    cin >> n;
    for(int i=0; i<n ;i++){
        cin >> a;
        if(a%2==0)c++;
    }
    cout << c;
    return 0;
}