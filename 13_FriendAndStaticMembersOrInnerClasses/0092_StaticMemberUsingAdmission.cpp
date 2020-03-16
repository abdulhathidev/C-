#include <iostream>

using namespace std;

class Student
{
private:
    int RollNo;
    string Name;

public:
    static int Admission;
    Student(string Name)
    {
        Admission++;
        RollNo = Admission;
        this->Name = Name;
    }
    void Display()
    {
        cout << "Student Name : " + Name << " Roll #: " << RollNo << endl;
    }
};

int Student::Admission = 0;

int main()
{
    Student s1("Abdul"), s2("Aysha"), s3("Afsar"), s4("Afraz"), s5("Amira");
    s1.Display();
    s5.Display();
    cout << Student::Admission << endl;
}