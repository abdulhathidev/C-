#include <iostream>

using namespace std;

class MyException1 : exception
{
};
class MyException2 : MyException1
{
};

void AllCatch()
{
    try
    {
        throw exception();
    }
    catch (int e)
    {
        cout << "Int catch" << endl;
    }
    catch (double e)
    {
        cout << "Double catch" << endl;
    }
    catch (char e)
    {
        cout << "Char catch" << endl;
    }
    catch (MyException2 e)
    {
        cout << "My Exception 2" << endl;
    }
    catch (MyException1 e)
    {
        cout << "My Exception 1" << endl;
    }
    catch (...)
    {
        cout << "All type of catch" << endl;
    }
}
int main()
{
    AllCatch();
}