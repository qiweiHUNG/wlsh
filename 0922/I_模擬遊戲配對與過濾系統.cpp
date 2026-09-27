/*某款線上遊戲配對系統正在處理玩家的進入與離開。

共有 N 個事件：

- '1 id level'：代表玩家編號 id 與等級 level 加入等待佇列。

- '2'：代表配對成功，將佇列中最前面的玩家匹配出去並輸出其資料。

- '3 id'：代表將玩家 id 加入黑名單。

若玩家在等待過程中違規，其 id 會被放入黑名單集合。

在執行操作 '2' 叫號時，若佇列最前端的玩家已經存在於黑名單中，必須將其自動跳過（移出佇列且不輸出），直到找到第一個不在黑名單中的玩家為止。

若佇列中沒有可配對的玩家（或剩餘玩家都在黑名單中），操作 '2' 請輸出 '-1'。

Input
第一行一個整數 N（1 ≤ N ≤ 105）。接下來 N 行，每行為一個指令：

- '1 id level'（1 ≤ id, level ≤ 109）

- '2'

- '3 id'（1 ≤ id ≤ 109）

Output
對於每一個 '2' 指令，輸出對應被成功配對玩家的 'id level'（中間以空格分隔，佔一行）。 若無人可配對則輸出 '-1'。*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector <pair<int,int>> v;
    for (int i = 0 ; i < n ; i++ ){
        int a=0 , b=0 , c=0;
        cin >> a;
        if (a == 1){
            cin >> b >> c;
            v.push_back({b,c});
            continue;
        }
        if (a == 2){
            if (v.size() == 0){
                cout << "-1" << "\n";
                continue;
            }
            cout << v.front().first << " " << v.front().second << "\n";
            v.erase(v.begin());
            continue;
        }
        if (a == 3){
            cin >> b;
            for (int j=0 ; j<v.size(); ){
                if (v[j].first == b) {
                    v.erase(v.begin() + j);
                } else {
                    j++;
                }
            }
            continue;
        }
    }

    return   0;
}