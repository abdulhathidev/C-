#include <iostream>
#include <math.h>

using namespace std;

class Node
{
public:
    //Co efficiant
    int Coeff;
    //Exponent
    int Exp;
    Node *Next = nullptr;
    Node(){}
    Node(int coeff,int exp)
    {
        Coeff = coeff;
        Exp = exp;
    }
};
class Polynomial
{
public:
    Node *PolyExp = nullptr;
    void Create()
    {
        cout << "Please enter the number of terms : ";
        int number;
        cin >> number;
        cout << "Please enter the coeff and exp : ";
        Node *t = nullptr;
        for (int i = 0; i < number; i++) {
            if(PolyExp == nullptr)
            {
                PolyExp = new Node();
                cin >> PolyExp->Coeff >> PolyExp->Exp;
                t = PolyExp;
            }
            else
            {
                t->Next = new Node();
                cin >> t->Next->Coeff >> t->Next->Exp;
                t = t->Next;
            }
        }
    }
    void Display()
    {
        Node *temp = PolyExp;
        while (temp != nullptr) {
            cout << temp->Coeff << "x^" << temp->Exp << " + ";
            temp = temp->Next;
        }
        cout << endl;
    }
    double Evaluate(int x)
    {
        Node *temp = PolyExp;
        double result = 0.0;
        while (temp != nullptr) {
            result += temp->Coeff*(pow(x, temp->Exp));
            temp = temp->Next;
        }
        return result;
    }
};
int main()
{
    Polynomial poly;
    poly.Create();
    poly.Display();
    int x;
    cout << "Enter the x value : ";
    cin >> x;
    cout << "The evaluated expression result is : " << poly.Evaluate(x) << endl;
    
    return 0;
}
