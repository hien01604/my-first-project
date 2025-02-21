#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

struct Student{
    string StudentId;
    string StudentName;
    string DateOfBirth;
    string gender;
    float MathScore;
    float PhysicScore;
    float ChemistryScore;
    float AverageScore;
};

void inputInfo(Student*student){
    getline(cin, student->StudentId);
    getline(cin, student->StudentName);
    getline(cin, student->DateOfBirth);
    getline(cin, student->gender);
    cin >> student->MathScore;
    cin >> student->PhysicScore;
    cin >> student->ChemistryScore;
}

float averageScore(Student*student){
    student->AverageScore = (student->MathScore + student->ChemistryScore + student->PhysicScore) / 3.0;
    return student->AverageScore;
}

void outputInfo(Student*student){
    cout << student->StudentId << "\t";
    cout << student->StudentName << "\t";
    cout << student->DateOfBirth << "\t";
    cout << student->gender << "\t";
    cout << setprecision(3) << student->AverageScore << "\t";
}

int main(){
    Student *student = new Student;
    inputInfo(student);
    averageScore(student);
    outputInfo(student);
    delete student;
}
