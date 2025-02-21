#include <iostream>

using namespace std;
struct PS
{
    int tu;
    int mau;
};
void nhapPS(PS &);
void xuatPS(PS);
PS tong2PS(PS,PS);

int main()
{
    PS a,b;
    nhapPS(a);
    nhapPS(b);
    PS tong  = tong2PS(a,b);
    xuatPS(tong);
    return 0;
}
void nhapPS(PS &a)
{
    cin>>a.tu;
    cin>>a.mau;
}
void xuatPS(PS a)
{
    cout<<a.tu <<"/" <<a.mau;
}
PS tong2PS(PS a,PS b)
{
    PS tong;
    tong.tu= a.tu*b.mau + a.mau*b.tu;
    tong.mau = a.mau * b.mau;
    return tong;
}
