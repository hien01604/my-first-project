/*Write a program to input an array of real numbers using a pointer then compute the
cumulative sum along the array.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    double *a = new double[n];

    // Nhap n
    cout << "Size of array: ";
    cin >> n;

    // Nhap array
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }

    // compute cumulative sum
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += *(a + i);
        cout << "Cumulative sum: " << sum << " ";
    }

    delete[] a;
}