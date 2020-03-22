#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> vtr;
    vtr.push(1);
    vtr.push(2);
    vtr.push(3);
    vtr.push(4);

    cout << "Iterator iteration " << endl;

    deque<int>::iterator itr;

    vtr.pop();
}