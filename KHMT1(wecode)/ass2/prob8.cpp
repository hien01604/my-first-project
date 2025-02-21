#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c, dtb;
    cin >> a >> b >> c;
    dtb = (a + b + c) / 3;
    cout << "DTB = " << setprecision(2) << fixed << dtb << endl;
    if (dtb <= 10 && dtb >= 9)
    {
        cout << "Loai: XUAT SAC";
    }
    else if (dtb < 9 && dtb >= 8)
    {
        cout << "Loai: GIOI";
    }
    else if (dtb < 8 && dtb >= 7)
    {
        cout << "Loai: KHA";
    }
    else if (dtb < 7 && dtb >= 6)
    {
        cout << "Loai: TRUNG BINH KHA";
    }
    else if (dtb < 6 && dtb >= 5)
    {
        cout << "Loai: TRUNG BINH";
    }
    else if (dtb < 5 && dtb >= 4)
    {
        cout << "Loai: YEU";
    }
    else
    {
        cout << "Loai: KEM";
    }
    return 0;
}