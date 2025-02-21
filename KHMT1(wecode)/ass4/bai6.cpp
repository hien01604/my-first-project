// Tìm giá trị lớn nhất (max) của mảng, cho biết trong mảng có bao nhiêu phần tử có giá trị bằng max.

#include <iostream>
using namespace std;

void nhap(int arr[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// Tìm giá trị lớn nhất (max) của mảng, 
// cho biết trong mảng có bao nhiêu phần tử có giá trị bằng max.

void max(int arr[], int n)
{
    int max = arr[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count == 1;
        }
        else if( arr[i] == max){
            count++;
        }
    }
    cout << max << endl << count;
}

int main()
{
    int n;
    int arr[100];

    cin >> n;
    nhap(arr, n);

    max(arr, n);
}