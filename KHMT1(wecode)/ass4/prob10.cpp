#include <iostream>
using namespace std;

void InputArray(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void ConnectArray(int a[], int b[], int c[], int n, int m)
{
    int i = 0, j = 0, u = 0;
    while (u < m && j < n)
    {
        if (a[j] < b[u])
        {
            c[i] = a[j];
            j++;
            cout << c[i] << " ";
        }
        else
        {
            c[i] = b[u];
            u++;
            cout << c[i] << " ";
        }
        i++;
    }
    while (j < n)
    {
        c[i] = a[j];
        cout << c[i] << " ";
        i++;
        j++;
    }
    while (u < m)
    {
        c[i] = b[u];
        cout << c[i] << " ";
        u++;
        i++;
    }
}

int main()
{
    int a[100], b[100], c[100], n, m;
    InputArray(a, n);
    InputArray(b, m);
    ConnectArray(a, b, c, n, m);
    return 0;
}