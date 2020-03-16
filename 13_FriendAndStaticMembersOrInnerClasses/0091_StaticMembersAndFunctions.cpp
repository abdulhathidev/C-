#include <iostream>

using namespace std;

class Test
{
public:
    int a;
    static int count;
    Test()
    {
        count++;
    }
    static int GetCount()
    {
        return count;
    }
};

int Test::count = 0;

int main()
{
    Test t;
    Test::count++;
    cout << Test::count << endl;
    cout << t.count << endl;
    cout << "Static GetCount function : " << t.GetCount() << endl;
    cout << "Static GetCount scoperesolution : " << Test::GetCount() << endl;
}