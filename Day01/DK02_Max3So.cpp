#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Khai báo 3 biến a, b, c;
    int a, b, c;

    // Nhập vào 3 số a, b, c;
    cin >> a >> b >> c;

    // Dùng hàm max tìm số lớn nhất
    cout << max(a, max(b, c));
    return 0;
}
