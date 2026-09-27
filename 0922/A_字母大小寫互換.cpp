/*給定一個長度為 N
 的英文字符串，請將其中所有的英文大寫字母轉換成小寫字母，小寫字母轉換成大寫字母。 其他非英文字母的字符（如數字或標點符號）請保持原樣輸出。

Input
第一行一個整數 N
，滿足 1≤N≤105
。第二行一個長度為 N
 的字串 S
。

Output
輸出轉換後的字串 S′
。*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0;i < n;i++){
        
        if (s[i] >= 65 && s[i] <=90 ){
            s[i] = s[i] + 32;
            continue;
        }
        if (s[i] >= 97 && s[i] <=122 ){
            s[i] = s[i] - 32;
            continue;
        }
    }
    cout << s;
    return 0;
}