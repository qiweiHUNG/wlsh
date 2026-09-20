/*一次段考結束，班上 N 位同學各考了一個分數。老師想知道：有幾位同學的分數「嚴格大於全班平均」？

（嚴格大於的意思是：剛好等於平均不算。）

Input
第一行一個整數 N，滿足 1 ≤ N ≤ 105。第二行有 N 個整數，第 i 個為第 i 位同學的分數 ai，滿足 0 ≤ ai ≤ 109，以空格分隔。

Output
一行一個整數，代表分數嚴格大於全班平均的人數。*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector <long long> a(n);
    long long sum = 0 ;
    for (int i =0 ;i <n;i++){cin >> a[i];}
    for (int j =0 ;j <n;j++){sum += a[j];}
    int count=0;
    for (int q =0 ;q <n;q++){
        if (n*a[q] > sum)count++;
    }
    
    cout << count;
}
