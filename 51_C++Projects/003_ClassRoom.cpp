#include <iostream>
#include <fstream>

using namespace std;

class Student
{
public:
    string Name;
    int Age;
    int RollNumber;
    string Branch;
    friend ofstream &operator<<(ofstream &ofs, Student &student);
    friend ifstream &operator>>(ifstream &ifs, Student &student);
    void Display()
    {
        cout << "Name       : " << Name << endl;
        cout << "Age        : " << Age << endl;
        cout << "Roll #     : " << RollNumber << endl;
        cout << "Branch     : " << Branch << endl;
    }
};

ofstream &operator<<(ofstream &ofs, Student &student)
{
    ofs << student.Name << endl;
    ofs << student.Age << endl;
    ofs << student.RollNumber << endl;
    ofs << student.Branch << endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs, Student &student)
{
    getline(ifs, student.Name);
    ifs >> student.Age >> student.RollNumber >> student.Branch;
    return ifs;
}

class ClassRoom
{
public:
    Student std;
    void CreateStudent()
    {
        ofstream ofs("ClassRoom.txt", ofstream::app);
        ofs << std;
        ofs.close();
    }
};

int main()
{
    ClassRoom classRoom1;
    Student s1;
    s1.Name = "Abdul Hathi";
    s1.Age = 36;
    s1.RollNumber = 1001;
    s1.Branch = "B-Tech";
    classRoom1.std = s1;
    classRoom1.CreateStudent();

    Student s2;
    ifstream ifs("ClassRoom.txt");
    ifs >> s2;
    s2.Display();
}