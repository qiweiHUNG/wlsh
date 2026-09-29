/*一場程式競賽有 N 支隊伍參加。每支隊伍有一個隊伍編號、解出的題數，以及總罰時。

冠軍的判定規則，依序如下： 1. 解題數越多越好。 2. 若解題數相同，總罰時越少越好。 3. 若解題數與罰時都相同，則隊伍編號越小者勝。

請找出冠軍隊伍，輸出它的隊伍編號。

Input
第一行一個整數 N，滿足 1 ≤ N ≤ 105。接下來 N 行，每行三個整數：隊伍編號 id、解題數 solved、總罰時 penalty，滿足 1 ≤ id ≤ 109、0 ≤ solved ≤ 1000、0 ≤ penalty ≤ 109，以空格分隔。

Output
一行一個整數，為冠軍隊伍的編號。*/
#include <bits/stdc++.h>

using namespace std;

struct team{
    int id;
    int s;
    int p;
};
int main() 
{
    int n ;
    int mx_s = 0;
    int mx_p = INT_MAX;
    int mx_id = INT_MAX;
    cin >> n; 
    team  teams[n];
    for (int i=0 ; i<n ; i++){
        cin >> teams[i].id >> teams[i].s >> teams[i].p ;
    }
    for (int i=0 ; i< n ; i++){
        if(mx_s < teams[i].s){
            mx_s = teams[i].s;
            mx_p = teams[i].p;
            mx_id = teams[i].id;
            continue;
        }
        if(mx_s == teams[i].s){
            if(mx_p > teams[i].p){
                mx_s = teams[i].s;
                mx_p = teams[i].p;
                mx_id = teams[i].id;
                continue;
            }
            if(mx_p == teams[i].p){
                if(mx_id > teams[i].id){
                    mx_s = teams[i].s;
                    mx_p = teams[i].p;
                    mx_id = teams[i].id;
                    continue;
                }

            }
        }
    }
    cout << mx_id;
    return 0;
}