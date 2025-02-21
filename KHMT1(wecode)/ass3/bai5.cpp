// tinh tong

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0, giaithua = 1;
    float sum3 = 0, sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum1 += pow(i, i);
        sum2 += giaithua * i;
        giaithua *= i;
        sum += i;
        sum3 += 1 / sum;
    }

    cout << sum1 << endl
         << sum2 << endl
         << sum3 << endl;
}