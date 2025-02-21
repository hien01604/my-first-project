// Given two integers, swap these two integers without using a subsidiary variable.
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *ptra, *ptrb;

    cin >> a >> b;
    
    ptra = &a;
    ptrb = &b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
}
