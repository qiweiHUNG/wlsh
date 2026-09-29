/*校門口的便當店老闆娘把開店以來連續 N 天、每一天的營業額都記在帳本上（生意好的日子是正的，賠錢的日子是負的）。

她會問你 Q 次問題，每次給兩個數字 l 和 r，想知道「從第 l 天到第 r 天」這段期間的總營業額是多少。

老闆娘問問題的速度很快，你可不能每次都從頭慢慢加——想想有沒有更聰明的辦法，能瞬間回答每一個問題。

Input
第一行兩個整數 N 和 Q，滿足 1 ≤ N, Q ≤ 2 × 105。第二行有 N 個整數，第 i 個為第 i 天的營業額 ai，滿足  - 109 ≤ ai ≤ 109，以空格分隔。接下來 Q 行，每行兩個整數 l、r，滿足 1 ≤ l ≤ r ≤ N。

Output
輸出 Q 行，第 k 行為第 k 筆查詢的區間總營業額。*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n=0,q=0,l=0,r=0;
    cin >> n >> q;
    vector <int> v(n);
    vector <long long> vn(n+1);
    for (int i = 1; i <= n; i++) {
        long long revenue;
        cin >> revenue;
        vn[i] = vn[i - 1] + revenue;
    }

    for (int p=0 ; p<q ; p++){
        cin >> l >> r;
        cout << vn[r] - vn[l-1] << "\n";
    }

    return 0;
}