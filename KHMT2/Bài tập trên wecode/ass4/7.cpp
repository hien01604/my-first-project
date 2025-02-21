/*Có một vài số nguyên tố khi viết đảo lại nó cũng là số nguyên tố.
Ví dụ như 17 hay 71 đều là số nguyên tố. Cho hai số a và b hãy tìm xem
có bao nhiêu số x nằm trong đoạn [a, b] sao cho khi viết xuôi hay viết đảo số đó đều là số nguyên tố.*/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n/2 ; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int reverse(int n, int soDaoNguoc = 0)
{
    if (n == 0)
    {
        return soDaoNguoc;
    }
    else
    {
        int chuSoCuoi = n % 10;
        soDaoNguoc = soDaoNguoc * 10 + chuSoCuoi;
        return reverse(n / 10, soDaoNguoc);
    }
}

int countNumber(int a, int b)
{
    if (a > b)
    {
        return 0;
    }
    int count = 0;
    if (isPrime(a) && isPrime(reverse(a)))
    {
        count = 1;
    }
    return count + countNumber(a + 1, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int result = countNumber(a, b);
    cout << result;
}