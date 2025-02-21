#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    float a;
    cin >> a >> n;
    int a1 = round(a * n);
    cout << setprecision(10) << 1.0*a1 / n;
    return 0;
} 