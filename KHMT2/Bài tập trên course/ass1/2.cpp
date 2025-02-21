/*Write a program to input an array of integers using a pointer and find the maximum value
of the array*/

#include <iostream>
using namespace std;


int main()
{
    int n;
    int *a = new int[n];

    //Nhap so phan tu
    cout << "Size of array: ";
    cin >> n;

    //Nhap phan tu
    cout << "List of number: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }

    //Tim phan tu lon nhat
    int max = *a;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) > max)
            max = *(a + i);
    }
    cout << "Max value: " << max;

    delete[] a;
}