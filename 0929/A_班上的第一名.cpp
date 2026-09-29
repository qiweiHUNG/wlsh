/*班上有 N 位同學，每位同學有一個座號，以及國文、數學、英文三科的分數。

一位同學的「總分」是三科分數的總和。老師想找出總分最高的同學是誰。如果有多位同學總分相同並列最高，則以「座號最小」的那一位為準。

請輸出總分最高（同分時座號最小）那位同學的座號。

Input
第一行一個整數 N，滿足 1 ≤ N ≤ 105。接下來 N 行，每行有四個整數：座號 id、國文 c、數學 m、英文 e，滿足 1 ≤ id ≤ 109、0 ≤ c, m, e ≤ 100，以空格分隔。

Output
一行一個整數，為總分最高（同分時座號最小）那位同學的座號*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n ;
    cin >> n;
    map <int,int> mp;
    int mx = 0;
    int mn_id = INT_MAX;
    for (int i=0 ; i<n  ; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        mp[a] = b+c+d;
    }
    for (auto i : mp){
        if (mx < i.second){
            mx = i.second;
            mn_id = i.first;
            continue;
        }
        if (mx == i.second){
            mn_id = min(mn_id,i.first);
        }

    }

    cout << mn_id << "\n";
    return 0;
}