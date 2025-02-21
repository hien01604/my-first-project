/*Write a program to input an NXN matrix of real numbers using dynamic allocation and
pointers then do the following requirements:
• Compute the maximum value of each row.
• Compute the minimum value of each column.
• Check if a matrix is a symmetric matrix or not.*/

#include <iostream>
using namespace std;

void inputMatrix(double **a, int &m, int &n)
{
    cout << "Input Matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> *(*(a + i) + j);
        }
    }
}

void findMaxRow(double **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        double maxRow = *(*(a + i));
        for (int j = 1; j < n; j++)
        {
            if (*(*(a + i) + j) > maxRow)
                maxRow = *(*(a + i) + j);
        }
        cout << maxRow << " ";
    }
    cout << endl;
}

void findMinCol(double **a, int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        double minCol = *(*(a + 0) + i);
        for (int j = 1; j < m; j++)
        {
            if (*(*(a + j) + i) < minCol)
                minCol = *(*(a + j) + i);
        }
        cout << minCol << " ";
    }
    cout << endl;
}

bool checkIsSymmetric(double **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(*(a + i) + j) != *(*(a + j) + i))
                return false;
        }
    }
    return true;
}

void isSymmetric(double **a, int m, int n)
{
    if (checkIsSymmetric(a, m, n))
        cout << "Symmetric";
    else
        cout << "No symmetric";
}

int main()
{
    int m, n;
    cout << "Input n, m (m = n): ";
    cin >> m >> n;
    double **a;
    a = new double *[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new double[n];
    }

    inputMatrix(a, m, n);

    cout << "Max value each row: ";
    findMaxRow(a, m, n);

    cout << "Min value each column: ";
    findMinCol(a, m, n);

    cout << "Is symmetric? ";
    isSymmetric(a, m, n);

    for (int i = 0; i < m; i++)
    {
        delete[] a[i];
        delete[] a;
    }
}
