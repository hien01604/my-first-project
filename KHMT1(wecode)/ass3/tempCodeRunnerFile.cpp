#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev = 0;
    for (int i = 0; i < n; i++)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (rev == n)
    {
        cout << "DX";
    }
    else
    {
        cout << "Khong DX";
    }
}