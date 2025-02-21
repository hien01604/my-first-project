/*Viết chương trình nhập vào số nguyên x sao cho 1 ≤ x ≤ 30. 
Nếu x không thỏa điều kiện, chương trình xuất ra màn hình thông báo 
“So <x> khong nam trong khoang [1,30].”. Nếu x nằm trong khoảng [1,30], 
chương trình xuất ra màn hình số Fibonacci thứ x.*/
#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
    int x;
    cin >> x;

    if (x < 1 || x > 30)
    {
        cout << "So " << x << " khong nam trong khoang [1,30].";
    }
    else
    {
        cout << Fibo(x);
    }
    return 0;
}
int Fibo(int x)
{
    if (x <= 1)
    {
        return x;
    }
    else
    {
        return Fibo(x - 1) + Fibo(x - 2);
    }
}