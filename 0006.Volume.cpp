#include <iostream>

using namespace std;

// Formula : V = πr²h
void CalculateVolumeOfCylinder()
{
    cout << "Enter the radius and hight of the cylinder : ";
    int r, h;
    float area;
    cin >> r >> h;
    area = 3.1425 * r * r * h;
    cout << "Area of the cylinder is : " << area << endl;
}
int main()
{
    CalculateVolumeOfCylinder();
    return 0;
}