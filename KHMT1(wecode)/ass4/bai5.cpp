#include <iostream>
using namespace std;

void nhap(int arr[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void xuat(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Thêm một phần tử có giá trị x vào mảng tại vị trí có chỉ số k.
void add(int arr[], int &n, int x, int k)
{
    n++;
    for (int i = n - 1; i > k; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k] = x;
}

int main()
{
    int n, x, k;
    int arr[100];

    cin >> n;
    nhap(arr, n);
    cin >> x;
    do
    {
        cin >> k;
    } while (k < 0 || k > 6);
    add(arr, n, x, k);

    xuat(arr, n);

    return 0;
}