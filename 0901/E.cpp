// 給你三個正整數，代表三條線段的長度。

// 請判斷它們能否構成一個三角形；若能，再依最大角判斷它是直角、銳角還是鈍角三角形。

// 判斷依據：設三邊排序後為 a ≤ b ≤ c，比較 a2 + b2 與 c2。

// 注意：輸入的三個邊長順序是任意的，不保證由小到大。請先自行排序，找出最長邊後再套用三角形不等式與 a2 + b2 和 c2 的比較。

// 另外注意邊長最大到 109，平方後會超出 32 位元整數範圍（即 int 之範圍）。

// Input
// 一行三個整數，滿足 1 ≤ 三邊 ≤ 10⁹。

// Output
// 輸出一個單字：

// 無法構成三角形：輸出 Invalid
// a2 + b2 = c2：輸出 Right
// a2 + b2 > c2：輸出 Acute
#include <bits/stdc++.h>
using namespace std;
long long a,b,c;
long long x,y,z;
int main()
{
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b); 
    x = a*a;
    y = b*b;
    z = c*c;
    long long d=x+y;
    if((a+b)<=c){
       cout << "Invalid"; 
       return 0;
    }
    if (d==z){
        cout << "Right"; 
    }
    else if( d<z ){
        cout << "Obtuse";
    }
    else if( d>z ){
        cout << "Acute";
    }
    return 0;
}
