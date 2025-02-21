#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    while (a == 0)
    {
        cin >> a;
    }
    float d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "PT co nghiem kep: x1 = x2 = " << -b / (2 * a);
    }
    else if (d < 0)
    {
        cout << "PTVN";
    }
    else
    {
        cout << "PT co hai nghiem phan biet: " << endl;
        float x1 = (-b - sqrt(d)) / (2 * a);
        float x2 = (-b / a) - x1;
        cout << "x1= " << x1 << endl;
        cout << "x2= " << x2 << endl;
    }
    return 0;
}