/*Nhập mảng 1 chiều các số nguyên có n phần tử (0<n<100).

Xuất tất cả các phần tử có chỉ số là số lẻ (chỉ số của mảng bắt đầu từ 0)*/

#include <iostream>
using namespace std;

void nhapMang(int arr[], int &n)
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
        if (i % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int n;
    int arr[100];
    do
    {
        cin >> n;
    } while (n <= 0 && n >= 100);
    nhapMang(arr, n);
    xuat(arr, n);
}