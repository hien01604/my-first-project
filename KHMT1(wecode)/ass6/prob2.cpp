#include <iostream>
using namespace std;

// Khai báo cấu trúc PhanSo
struct PhanSo
{
    int tu;
    int mau;
};

void Nhap(PhanSo &x)
{
    cin >> x.tu;
    cin >> x.mau;
}

// Hàm so sánh hai phân số
int SoSanh(PhanSo a, PhanSo b)
{
    int num1 = a.tu * b.mau; // Tích tử của phân số thứ nhất với mẫu của phân số thứ hai
    int num2 = b.tu * a.mau; // Tích tử của phân số thứ hai với mẫu của phân số thứ nhất

    // So sánh và trả về kết quả
    if (num1 == num2)
    {
        return 0; // Phân số thứ nhất bằng phân số thứ hai
    }
    else if (num1 > num2)
    {
        return 1; // Phân số thứ nhất lớn hơn phân số thứ hai
    }
    else
    {
        return -1; // Phân số thứ nhất nhỏ hơn phân số thứ hai
    }
}

int main()
{
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}