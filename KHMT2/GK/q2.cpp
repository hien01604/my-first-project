#include <iostream>
using namespace std;

void inputMatrix(int **a, int r, int c)
{
    cin >> r >> c;
    a = new int *[r];
    for (int i = 0; i < r; i++)
    {
        a[i] = new int[c];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j] = 0;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < r; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}

int main()
{
    int **a, r, c;
    inputMatrix(a, r, c);
}

// cấp phát động mảng 1 chiều
int *a = new int[];
delete[] a;

// cấp phát động mảng 2 chiều
int **a, r, c;
int a = new int*[r];
for (int i = 0; i < r; i ++){
    a[i] = new int[c];
}
for (int i = 0; i < r; i++){
    delete[] a[i];
}
delete[] a;

int a; int *p = &a;
Đ/c biến a/giá trị p:&a or p
giá trị biến a: *p
(*p=a, p=&a)
class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num = 0, int denom = 1) 
    : numerator(num), denominator(denom) {
    }
    // Destructor
    ~Fraction() {
    }
};