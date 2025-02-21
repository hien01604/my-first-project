// Xuất tất cả các số nguyên tố trong mảng, nếu mảng không có số nguyên tố xuất số 0.
#include <iostream>
using namespace std;
#include <cmath>

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void nhap(int arr[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Xuất tất cả các số nguyên tố trong mảng, nếu mảng không có số nguyên tố xuất số 0.
void xuat(int arr[], int n)
{
    bool foundPrime = false;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            cout << arr[i] << " ";
            foundPrime = true; 
        }
    }
    if (!foundPrime)
    {
        cout << "0";
    }
}

int main()
{
    int n;
    int arr[100];

    cin >> n;
    nhap(arr, n);

    xuat(arr, n);

    return 0;
}