#include <iostream>
using namespace std;

void Area()
{
    cout << "Enter the base and hight : ";
    int a, b;
    float c;
    cin >> a >> b;
    c = (float)a * b / 2;
    cout << "Area : " << c << endl;
}

//Area of circle formula : A = πr²
void AreaOfCircle()
{
    float r, area;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    area = 3.1425 * r * r;
    cout << "Area of the circle is : " << area << endl;
}

int main()
{
    Area();
    AreaOfCircle();
    return 0;
}