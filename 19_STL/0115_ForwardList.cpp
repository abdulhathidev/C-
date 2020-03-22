#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> vtr = {1, 2, 3, 4, 5};
    vtr.push_front(8);
    vtr.push_front(9);

    vtr.pop_front();

    cout << "Iterator iteration " << endl;

    forward_list<int>::iterator itr;
    for (itr = vtr.begin(); itr != vtr.end(); itr++)
        cout << ++*itr << " ";
    cout << endl;
    cout << "Foreach iteration " << endl;
    for (int x : vtr)
        cout << x << " ";
    cout << endl;
}