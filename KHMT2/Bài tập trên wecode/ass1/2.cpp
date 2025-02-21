/*Given a positive integer number n, write a program to create an array of the first n prime numbers
(sorted in increasing order).*/

#include <iostream>
#include <cmath>
using namespace std;

int checkIsPrime(int *n)
{
    if (*n < 2)
        return 0;
    for (int i = 2; i <= sqrt(*n); i++)
    {
        if (*n % i == 0)
            return 0;
    }
    return 1;
}

void primeArray(int *a, int &n)
{
    int count = 0;
    for (int i = 2; count < n; i++)
    {
        if (checkIsPrime(&i))
        {
            a[count] = i;
            count++;
        }
    }
}
void outputArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    primeArray(a, n);
    outputArray(a, n);
    delete[] a;
}