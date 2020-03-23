#include <iostream>

using namespace std;

int main()
{
    int marks = 10; //declaration and direct value 10 is assigned is called sa literal.

    int m1, m2, m3;   //Multiple declaration
    float x1, x2, x3; //Multiple declaration

    // Different types os assigning the value while decalration
    int day = 1;
    int day1(1);
    int day2 = (0);
    int day3{0};
    int day4 = {0};

    int a = 10;   //decimal declaration
    int b = 010;  //octal declaration
    int c = 0x59; //hexa declaration

    cout << "a : " << a << " b : " << b << " c : " << c << endl;
}