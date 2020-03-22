#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> vtr = {1, 2, 3, 4, 5};
    vtr.insert(8);
    vtr.insert(9);

    cout << "Iterator iteration " << endl;

    set<int>::iterator itr;
    for (itr = vtr.begin(); itr != vtr.end(); itr++)
        cout << *itr << " ";
    cout << endl;
    cout << "Foreach iteration " << endl;
    for (int x : vtr)
        cout << x << " ";
    cout << endl;
}