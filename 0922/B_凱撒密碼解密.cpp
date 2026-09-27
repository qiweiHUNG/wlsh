/*
小明收到一段加密訊息，該訊息由大寫英文字母組成。加密方式為將每個字母在 Alphabet 中往後移動 K
 個位置（如果超過 'Z' 則循環回到 'A'）。

例如：當 K=2
 時，'A' 變成 'C'，'Y' 變成 'A'。

現在給定密文與位移量 K
，請還原出原本的明文。

Input
第一行兩個整數 N
 和 K
，滿足 1≤N≤105
，0≤K≤109
。第二行一個長度為 N
 的大寫英文字串 S
。

Output
輸出解密後的明文字串。*/
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n;i++){
        k = k%26;
        if (s[i]-k < 65){
            s[i] = s[i]-k+26;
            continue;
        }
        s[i] = s[i] - k;
        
    }
    cout << s;
    return 0;
}