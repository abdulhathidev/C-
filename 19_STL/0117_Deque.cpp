#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> vtr = {1, 2, 3, 4, 5};
    vtr.push_back(8);
    vtr.push_back(9);

    vtr.pop_back();

    cout << "Iterator iteration " << endl;

    deque<int>::iterator itr;
    for (itr = vtr.begin(); itr != vtr.end(); itr++)
        cout << ++*itr << " ";
    cout << endl;
    cout << "Foreach iteration " << endl;
    for (int x : vtr)
        cout << x << " ";
    cout << endl;
}