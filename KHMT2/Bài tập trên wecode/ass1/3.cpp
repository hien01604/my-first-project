/*Create an array A of the first n prime numbers as in P1.02.
Given a positive integer y, find the number of elements of A that contains y.*/

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

void numberOfElement(int *a, int n, int y)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = *(a + i);
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit == y)
            {
                count++;
                break;
            }
            temp = temp / 10;
        }
    }
    cout << count;
}
/*void outputArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
}*/

int main()
{
    int n, y;
    cin >> n >> y;
    int *a = new int[n];
    primeArray(a, n);
    numberOfElement(a, n, y);
    //outputArray(a, n);
    delete[] a;
}