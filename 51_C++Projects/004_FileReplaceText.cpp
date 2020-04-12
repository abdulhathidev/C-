#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string fileContent = "My name is aysha";
    string name = "aysha";
    string replaceName = "abdul hathi";
    auto pos = fileContent.find(name);
    while (pos != std::string::npos) {
        fileContent.replace(pos, name.length(), replaceName);
        pos = fileContent.find(name,pos);
    }
    cout<< fileContent << endl;
    
    ofstream ofs("Test.txt");
    ofs << "My name is Abdul" << endl;
    ofs << "My name is Aysha" << endl;
    ofs << "My name is Afsar" << endl;
    ofs << "My name is Afraz" << endl;
    ofs << "My name is Amira" << endl;
    ofs.close();
    
    ifstream ifs("Test.txt");
    vector<string> lines;
    while(ifs.good())
    {
        while (!ifs.eof()) {
            string line;
            getline(ifs,line);
            lines.push_back(line);
        }
    }
    ifs.close();
    
    for(string l : lines)
        cout<<l<<endl;
    
    
}
