#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float p = (a + b + c) / 2;
    float dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a = b = c)
        {
            cout << "Tam giac deu, dien tich = " << setprecision(2) << fixed << dientich;
        }
        else if (a *a + b *b = c *c || a *a + c *c = b *b || b *b + c *c = a * a)
        {
            cout << "Tam giac vuong, dien tich = " << setprecision(2) << fixed << dientich;
        }
        else if (a = b || a = c || b = c)
        {
            cout << "Tam giac deu, dien tich = " << setprecision(2) << fixed << dientich;
        }
        else
        {
            cout << "Tam giac thuong, dien tich: " << setprecision(2) << fixed << dientich;
        }
    }
    esle
    {
        cout << "Khong phai tam giac";
    }
    return 0;
}