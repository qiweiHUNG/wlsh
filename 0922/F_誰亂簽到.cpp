/*五零高中今天舉辦「尋找GDD」的活動，參加人員陸續到場簽到參加。 但是五零高中是低等學校，有些學生會忘記自己有沒有簽到過。 因此我們需要從小到大、並且去除重複，輸出這些學生的ID，以計算有幾位以及哪些學生有參加活動。

Input
第一行一個整數 N（1 ≤ N ≤ 105）。代表有 N 筆簽到。 第二行有 N 個整數 ai（1 ≤ ai ≤ 109），代表簽到的 ID。

Output
第一行輸出一個整數 K，代表不重複 ID 的個數。 第二行輸出 K 個整數，為從小到大排序後的不重複 ID，以空格分隔*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    set<long long> st;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        st.insert(a);
    }
    cout << st.size() << "\n" ;
    
    for (long long id : st ){
         cout << id << " ";
    }
    return 0;
}