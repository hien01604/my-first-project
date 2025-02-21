#include <iostream>
#include <string>
using namespace std;

class student {
    public:
    string name, id, intake, dayofbirth;
    int numbercourse;
    float* scores;

    float average();
    void inputStudent();
    void outputStudent();
    ~Student() {
        delete[] scores;
    }
};

void student::inputStudent() {
    cout << "Input name: ";
    cin.ignore();
    getline(cin, name);


    cout << "Input id: ";
    getline(cin, id);

    cout << "Input intake: ";
    getline(cin, intake);

    cout << "Input day of birth: ";
    getline(cin, dayofbirth);

    cout << "Input number of courses: ";
    cin >> numbercourse;
    cin.ignore(); // Ignore newline character

    scores = new float[numbercourse];
    for (int i = 0; i < numbercourse; i++) {
        cout << "Input score of course " << i + 1 << ": ";
        cin >> scores[i];
    }
}

void student::outputStudent() {
    cout << "Student information" << endl;
    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
    cout << "Intake: " << intake << endl;
    cout << "Date of birth: " << dayofbirth << endl;
}

float student::average() {
    float sum = 0;
    for (int i = 0; i < numbercourse; i++) {
        sum += scores[i];
    }
    return sum / numbercourse;
}

int main() {
    int numberofstudent;
    cout << "Enter number of students: ";
    cin >> numberofstudent;
    cin.ignore(); // Ignore newline character

    student* s = new student[numberofstudent];

    for (int i = 0; i < numberofstudent; i++) {
        s[i].inputStudent();
    }

    for (int i = 0; i < numberofstudent; i++) {
        s[i].outputStudent();
        cout << "Average score: " << s[i].average() << endl;
    }

    delete[] s;

    return 0;
}
