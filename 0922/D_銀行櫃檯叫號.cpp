/*
銀行櫃檯正使用 FIFO（先進先出）佇列服務顧客。 有 N 個操作指令，指令格式如下：

- '1 x'：代表顧客編號 x 來排隊。

- '2'：代表櫃檯叫號，服務佇列最前面的顧客並輸出其編號。若當時沒有人在排隊，請輸出 '-1'。

Input
第一行一個整數 N（1 ≤ N ≤ 105）。 接下來 N 行，每行為一個指令（'1 x' 或 '2'），其中 1 ≤ x ≤ 109。

Output
對於每一個 '2' 指令，輸出對應被服務的顧客編號（若無人排隊則輸出 '-1'），每項結果各佔一行。*/
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n = 0;
    cin >> n;
    vector<int> a;
    vector<int> b;
    int x;
    for (int i=0 ; i<n ; i++){
        cin >> x;
        if (x==2 && a.empty()){
            b.push_back(-1);
            continue;
        }
        if (x==2 && !a.empty()){
            b.push_back(a[0]);
            a.erase(a.begin());
            continue;
        }
        cin >> x;
        a.push_back(x);
    }
    int y = b.size();
    for (int j=0 ; j<y ; j++){
        cout << b[j] <<endl;
    }
    return 0;
}