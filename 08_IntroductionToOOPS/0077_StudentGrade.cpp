#include <iostream>

using namespace std;

struct Subject
{
    string Name;
    int Mark;
};

class Student
{
    int RollNumber;
    string Name;
    Subject *Marks;

public:
    Student()
    {
        cout << "Enter Student Rollnumber : ";
        cin >> RollNumber;
        cout << "Enter Student Name : ";
        cin >> Name;
        Marks = new Subject[3];
        for (int i = 0; i < 3; i++)
        {
            Subject s;
            cout << "Enter the subject Name : ";
            cin >> s.Name;
            cout << "Enter the subject Mark : ";
            cin >> s.Mark;
            Marks[i] = s;
        }
    }
    string GetName() { return Name; }
    int TotalMarks()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += Marks[i].Mark;
        }
        return sum;
    }
    char CalculateGrade()
    {
        int sum = TotalMarks();
        int avg = sum / 3;
        if (avg < 45)
            return 'C';
        else if (avg > 45 && avg <= 65)
            return 'A';
        else
            return 'A';
    }
};

int main()
{
    Student student;
    cout << student.GetName() << "'s total marks : " << student.TotalMarks() << endl;
    cout << student.GetName() << "'s Grade : " << student.CalculateGrade() << endl;
    return 0;
}
