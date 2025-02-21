#include <iostream>
using namespace std;
void Nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
bool isBenford(int a[], int n)
{
    int dem4 = 0;
    int dem1 = 0;
    for (int i = 0; i < n; i++)
    {
        int res = 0;
        while (a[i])
        {
            res = a[i] % 10;
            a[i] = a[i] / 10;
        }
        if (res == 4)
        {
            dem4++;
        }
        else if (res == 1)
        {
            dem1++;
        }
    }
    if (dem4 == 1 && dem1 == 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void benford(int a[], int n){
    if(isBenford){
        cout << "TRUE";
    }
    else{
        cout << "FALSE";
    }
}

int main (){
    int n;
    int a[100];

    Nhapmang(a, n);
    benford(a, n);
}