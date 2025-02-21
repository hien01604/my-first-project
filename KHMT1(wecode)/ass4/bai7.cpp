#include <iostream>
using namespace std;
#define SIZE 100

void nhap(int numbers[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
}
// tìm số lớn thứ 2, số bé thứ 2
void max2(int numbers[], int n)
{
    int min = numbers[0];
    int max = numbers[0];
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    if (min == max)
    {
        cout << "0";
    }
    else
    {
        int min2 = max;
        int max2 = min;
        for (int i = 0; i < n; i++)
        {
            if (numbers[i] < min2 && numbers[i] != min)
            {
                min2 = numbers[i];
            }
            if (numbers[i] > max2 && numbers[i] != max)
            {
                max2 = numbers[i];
            }
        }
        cout << max2;
    }
}

int main()
{
    int numbers[SIZE];
    int n;
    cin >> n;
    nhap(numbers, n);
    max2(numbers, n);
    return 0;
}