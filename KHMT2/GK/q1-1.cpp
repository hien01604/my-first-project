#include<iostream>
using namespace std;
   
struct student {  // define struct name id 
    string name;
    int id;
};

struct date {   //define struct date ngày tháng năm bằng struct
    int date;
    int month;
    int year;
};

struct course {   // defien struct course tạo luôn score bằng con trỏ cho câu b
    int numbercourse;
    float* score;  // khoi tao con trỏ cho câu b
    float averege; // diem trung binh
};

void importt(student &stu, date &dte , date &dte2, course &c) {
    cout << "Nhap thong tin:\n";
    cout << "Nhap ten cua sinh vien: ";
    getline(cin, stu.name);
   // cin.ignore(); // Loai bo ky tu '\n' trong buffer

    cout << "Nhap ID: ";
    cin >> stu.id;
    cin.ignore(); // Loai bo ky tu '\n' trong buffer

    cout << "Nhap ngay intake: ";
    cin >> dte2.date >> dte2.month >> dte2.year;
    cin.ignore(); // Loai bo ky tu '\n' trong buffer

    cout << "Nhap date OF Birth: ";
    cin >> dte.date >> dte.month >> dte.year;
    cin.ignore();

    cout << "Number of course taken: ";
    cin >> c.numbercourse;
    cin.ignore(); // Loai bo ky tu '\n' trong buffer

    c.score = new float[c.numbercourse];  // cấp phát mảng động cho cái điểm của các course   c-> numbercourse là số lượng course
    for(int i = 0; i < c.numbercourse; i++) {
        cout << "Nhap diem cua course " << i + 1 << ": ";
        cin >> c.score[i];
    }
}

void exportt(student &stu, date &dte, date &dte2,course &c) {
    cout << "Thong tin sinh vien:\n";
    cout << "Ten: " << stu.name << endl;
    cout << "ID: " << stu.id << endl;
    cout << "Ngay intake: " << dte.date << "/" << dte.month << "/" << dte.year << endl;
    cout << "date OF birth: " << dte2.date << "/" << dte2.month << "/" << dte2.year << endl;
    cout << "So khoa hoc: " << c.numbercourse << endl;
    cout << "Diem cua cac khoa hoc: ";
    for(int i = 0; i < c.numbercourse; i++) {
        cout << c.score[i] << " ";
    }
}

// cau c
    void tinhaverege(course c){
        
        float temp=0;  //tao bien tam bang 0 
        for(int i = 0 ; i < c.numbercourse; i++){
           temp += c.score[i];  // cứ qua mỗi lớp sẽ cộng điểm của course đó lên cho đến lớp cuối cùng
        }

        cout << "diem trung binh la: " << temp /(c.numbercourse);

    }
int main() {
    student stu;
    date dte;
    date dte2;
    course c  ;

    importt(stu, dte,dte2, c);
    cout << " ========================================= \n" ;
    exportt(stu, dte,dte2, c);
    tinhaverege(c); 

    delete[] c.score;
    

    return 0;
}


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define Student structure
struct Student {
    string studentID;
    string studentName;
    string birthYear;
    string gender;
    float mathMarks;
    float physicsMarks;
    float chemistryMarks;
    float average;
};

// Function to calculate average marks
void calculateAverage(Student* student) {
    student->average = (student->mathMarks + student->physicsMarks + student->chemistryMarks) / 3.0;
}

// Function to display student information
void displayStudentInfo(Student* student) {
    cout << student->studentID << "\t" ;
    cout <<  student->studentName << "\t" ;
    cout << student->birthYear << "\t" ;
    cout << student->gender << "\t" ;
    cout << student->mathMarks << "\t" ;
    cout << student->physicsMarks << "\t" ;
    cout << student->chemistryMarks << "\t" ;
    cout << setprecision(3) << student->average << "\t" ;
}

int main() {
    // Create a Student object dynamically
    Student* student = new Student;

    // Input student information
    getline(cin, student->studentID);
    getline(cin, student->studentName);
    getline(cin, student->birthYear);
    getline(cin, student->gender);
    cin >> student->mathMarks;
    cin >> student->physicsMarks;
    cin >> student->chemistryMarks;

    // Calculate average marks
    calculateAverage(student);

    // Display student information
    displayStudentInfo(student);

    // Free memory
    delete student;

    return 0;
}