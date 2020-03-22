#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("My.txt");
    if (!ifs)
        cout << "File Cannot open" << endl;
    else if (ifs.is_open())
    {
        cout << "Files is opened" << endl;
        string firstLine, DOB;
        int age;
        getline(ifs, firstLine);
        ifs >> age >> DOB;

        ifs.seekg(5);
        if (ifs.eof())
            cout << "File reached end" << endl;

        cout << "First line : " << firstLine << endl;
        cout << "AGE        : " << age << endl;
        cout << "DOB        : " << DOB << endl;
    }
    ifs.close();
}