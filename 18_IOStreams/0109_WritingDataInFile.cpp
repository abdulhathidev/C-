#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs("My.txt", ios::trunc);
    ofs << "hello this is Abdul hathi" << endl;
    ofs << 36 << endl;
    ofs << "Sep-" << 23 << "-" << 1983;
    long pos = ofs.tellp();
    ofs.seekp(pos - 7);
    ofs.write(" haji", 5);
    cout << pos << endl;
    ofs.close();
}