// Định nghĩa (khai báo) kiểu dữ liệu để quản lý sinh viên gồm các thành phần là Mã số Sinh viên (kiểu chuỗi),
// Họ và Tên (kiểu chuỗi), Năm sinh (kiểu chuỗi), Giới tính (kiểu ký tự), Điểm toán (kiểu số thực),
// Điểm lý (kiểu số thực), Điểm hóa (kiểu số thực), Điểm Trung bình (kiểu số thực).
// Viết Chương trình nhập và xuất thông tin của danh sách gồm n (0 < n ≤ 100) sinh viên.

// Lưu ý Điểm trung bình được tính bằng công thức: (Điểm toán+Điểm lý+Điểm hóa)/3.

#include <iostream>
using namespace std;

#include <iomanip>
#include <string>

class Student
{
public:
    string id, name, dob;
    char gender;
    float math, physic, chemistry;

    float average();
    void input();
    void output();
};

float Student::average()
{
    float avg = (math + physic + chemistry) / 3;
    return avg;
}

void Student::input()
{
    cin.ignore();
    getline(cin, id);
    getline(cin, name);
    getline(cin, dob);
    cin >> gender;
    cin >> math >> physic >> chemistry;
}

void Student::output()
{
    cout << id << "\t";
    cout << name << "\t";
    cout << dob << "\t";
    cout << gender << "\t";
    cout << math << "\t";
    cout << physic << "\t";
    cout << chemistry << "\t";
    cout << setprecision(3) << average() << endl;
}

int main()
{
    int n;
    cin >> n;

    Student *s = new Student[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    for (int i = 0; i < n; i++)
    {
        s[i].output();
    }

    delete[] s;
    return 0;
}
