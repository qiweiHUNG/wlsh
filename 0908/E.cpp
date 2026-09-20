// 有一種簡單的數字遊戲：把一個整數的每一位「左右顛倒」重新讀出來。

// 例如 1234 反過來是 4321；而 1200 反過來是 0021，也就是 21（開頭的 0 不寫出來）。

// 給你一個整數 N，請輸出它反轉之後的結果。

// Input
// 一行一個整數 N，滿足 1 ≤ N ≤ 109。

// Output
// 一行一個整數，為 N 反轉後的結果（去掉前導零）。
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string n;
    cin >> n;
    int b = 0;
    bool a = true;
    int len = n.size();
    for (int i=len; i>0 ; i--){
        b=0;
        while (a){
            if (n[i-1]!='0'){
                a = false;
                break;
            }else{
                b=1;
                break;
            }
        }
        if (b==1)continue;
        cout << n[i-1];
    }
    
    return 0;
}
