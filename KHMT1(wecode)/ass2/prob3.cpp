#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh vo so nghiem";
        }
        else
        {
            cout << "Phuong trinh vo nghiem";
        }
    }
    else
    {
        cout << "Phuong trinh co nghiem la x = " << -b / a;
    }
    return 0;
}
