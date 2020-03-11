#include <iostream>
#include <math.h>

using namespace std;

void CalculateSpeed()
{
    cout << "Enter intial velocity, final velocity & acceleration : ";
    int v, u, a;
    float distance;
    cin >> v >> u >> a;
    distance = (v * v - u * u) / (2 * a);
    cout << "Speed : " << distance << endl;
}

//{Distance formula}
//Distance between two points P(x1,y1) and Q(x2,y2) is given by:
//d(P, Q) = √(x2 − x1)² + (y2 − y1)²
void CalculateDistanceBtw2Points()
{
    cout << "Enter the first point X and Y coordinate values : ";
    float x1, y1, x2, y2;
    cin >> x1 >> y1;
    cout << "Enter the second point X and Y coordinate values : ";
    cin >> x2 >> y2;
    float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "Distance between two point is : " << distance << endl;
}

int main()
{
    //CalculateSpeed();
    CalculateDistanceBtw2Points();
    return 0;
}