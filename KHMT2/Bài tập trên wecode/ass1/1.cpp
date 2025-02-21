/*Write a program to check whether an integer is a prime or not.
If the input number is prime then print out "1". Otherwise print out "0".*/

#include <iostream>
#include <cmath>
using namespace std;

bool checkIsPrime(int *n)
{
    if (*n < 2)
        return false;
    for (int i = 2; i <= sqrt(*n); i++)
    {
        if (*n % i == 0)
            return false;
    }
    return true;
}

void isPrime(int *n)
{
    
    {
        cout << "1";
    }
    else
    {
       if (checkIsPrime) cout << "0";
    }
}

int main()
{
    int n;
    int *ptr = &n;
    cin >> n;
    isPrime(ptr);
    return 0;
}