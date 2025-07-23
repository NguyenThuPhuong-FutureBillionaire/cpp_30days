#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Khai báo biến a, b
    int a, b;

    // Nhập 2 số nguyên
    cin >> a >> b;

    // Kiểm tra chia cho 0
    if (b == 0)
        cout << "ERROR";
    else
        cout << a % b;

    return 0;
}
