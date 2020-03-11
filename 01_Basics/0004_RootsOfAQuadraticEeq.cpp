/*
    formula : ax²+bx+c = 0
    r = -b ± √b²-4ac / 2a
*/
#include <iostream>
#include <math.h>
using namespace std;

void FindingTheRootsOfQuadraticEquation()
{
    cout << "Enter a, b, c : ";
    int a, b, c;
    float r1, r2;
    cin >> a >> b >> c;
    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "Roots are " << r1 << " " << r2 << endl;
}
int main()
{
    FindingTheRootsOfQuadraticEquation();
    return 1;
}