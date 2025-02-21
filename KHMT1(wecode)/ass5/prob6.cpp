// ma trận đường chéo
#include <iostream>
using namespace std;

void nhap(double a[][100], int &n, int &m);
bool isMaTranDuongCheo(double a[][100], int n, int m);

void nhap(double a[][100], int &n, int &m)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}
bool isMaTranDuongCheo(double a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j && a[i][j] == 0)
                return false;
            if (i != j && a[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    double a[100][100];

    nhap(a, n, m);
    if (isMaTranDuongCheo(a, n, m))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
