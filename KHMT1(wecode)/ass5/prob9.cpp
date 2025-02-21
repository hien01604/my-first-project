// cộng 2 ma trận
#include <iostream>
using namespace std;

void nhapA(double a[][100], int &m, int &n);
void xuat(double a[][100], int m, int n);

void nhap(double a[][100], int &m, int &n)
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void tong(double c[][100], double a[][100], double b[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void xuat(double c[][100], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    double a[100][100];
    double b[100][100];
    double c[100][100];

    nhap(a, m, n);
    nhap(b, m, n);

    tong(c, a, b, m, n);
    xuat(c, m, n);
}
