// 給你一個整數分數 score，請依下列規則輸出對應的等第：

// 90 ≤ score ≤ 100：輸出 A
// 80 ≤ score ≤ 89：輸出 B
// 70 ≤ score ≤ 79：輸出 C
// 60 ≤ score ≤ 69：輸出 D
// 0 ≤ score ≤ 59：輸出 F
// Input
// 一行一個整數 score，滿足 0 ≤ score ≤ 100。

// Output
// 一行一個大寫字母，代表等第。
#include <bits/stdc++.h>
using namespace std;
int a;
int main()
{
    cin >> a ;
    if  (90<=a && a<= 100){
        cout << "A";
    }
    else if  (80 <=a && a <= 89){
        cout << "B";
    }
    else if  (70<=a && a <= 79){
        cout << "C";
    }
    else if  (60<=a && a <= 69){
        cout << "D";
    }
    else {
        cout << "F";
    }
       
    return 0;
}
