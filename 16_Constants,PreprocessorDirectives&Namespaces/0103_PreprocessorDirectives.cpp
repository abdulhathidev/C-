#include <iostream>

using namespace std;

#define PI 3.14
#define MAX(x, y) (x > y ? x : y)
#define MSG(x) #x

#ifndef PIRound
#define PIRound 3
#endif

int main()
{
    cout << PI << endl;
    cout << PIRound << endl;
    cout << MAX(12, 50) << endl;
    cout << MSG(My name is Abdul Hathi) << endl;
    //PL << "Hi this using the print" << endl;
}