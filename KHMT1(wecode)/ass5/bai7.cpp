
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien A[],int &n){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i].MASV;
        cin.ignore();
        cin.getline(A[i].HoTen, 100);
        cin>>A[i].NgaySinh >> A[i].GioiTinh >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
    }
}
void Xuat(SinhVien A[],int n){
    for(int i=0;i<n;i++){
        A[i].DTB= (A[i].DiemToan+A[i].DiemLy+A[i].DiemHoa)/3;
        cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" << A[i].GioiTinh << "\t" << A[i].DiemToan << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa<< "\t" << setprecision(3) << A[i].DTB<<endl;
    }
}
#include <algorithm>

bool compareByMASV(const SinhVien& a, const SinhVien& b) {
    return strcmp(a.MASV, b.MASV) > 0;
}

void SapXepGiamTheoMASV(SinhVien A[], int n) {
    std::sort(A, A + n, compareByMASV);
}


int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}
