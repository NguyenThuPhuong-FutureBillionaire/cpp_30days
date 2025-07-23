#include <bits/stdc++.h>

using namespace std;

int main()
{
    //khai bao a, b
    int a, b;

    // nhap a, b;
    cin >> a >> b;

    // tính tổng, hiệu, tích
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;

    // in tổng, hiệu, tích
    cout << tong << endl;
    cout << hieu << endl;
    cout << tich << endl;

    // xu ly phep chia
    if (b == 0) cout << "ERROR"; //nếu phép chia kh thực hiện được
    else cout << fixed << setprecision(2) << (float)a / b;
    return 0;
}
