#include <iostream>

using namespace std;

// Hàm xóa tất cả các phần tử có giá trị x trong mảng
void xoaPhanTu(int arr[], int &n, int x)
{
    int i = 0, j = 0;

    while (j < n)
    {
        if (arr[j] == x)
        {
            j++;
        }
        else
        {
            arr[i] = arr[j];
            i++;
            j++;
        }
    }

    n = i; // Cập nhật số lượng phần tử trong mảng
}

int main()
{
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    // Gọi hàm xóa phần tử x
    xoaPhanTu(arr, n, x);

    // Xuất mảng sau khi xóa
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
