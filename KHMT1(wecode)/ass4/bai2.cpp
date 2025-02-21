/*Tạo mảng một chiều a bao gồm n số nguyên tố theo thứ tự tăng dần. Nhập vào chữ số y (0 ≤ y ≤ 9).
Tìm xem trong mảng a có bao nhiêu phần tử chứa số y.*/

#include <iostream>
#include <cmath>
using namespace std;

// so nguyen to
bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
// Sap xep snt tang dan
void sapxepSNTtangdan(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (isPrime(arr[i]))
        {
            for (int j = n - 1; j > i; j--)
            {
                if (isPrime(arr[j]))
                {
                    if (arr[j] > arr[j - 1])
                    {
                        swap(arr[j], arr[j - 1]);
                    }
                }
            }
        }
    }
}
// Tìm xem trong mảng a có bao nhiêu phần tử chứa số y.
void timPhanTuChuaY(int arr[], int n, int y)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        while (n > 10)
        {
            if (n % 10 == y)
            {
                count++;
            }
            n = n / 10;
        }
    }
    cout << count;
}

int main()
{
    int n, y;
    int arr[100];
    cin >> y;
    cin >> n;
    sapxepSNTtangdan(arr, n);
    timPhanTuChuaY(arr, n, y);
}