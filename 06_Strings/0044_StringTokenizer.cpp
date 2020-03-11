#include <iostream>

using namespace std;

int main()
{
    char str[20] = "X=10;Y=5;Z=12";
    char *p = strtok(str, ";");
    while (p != NULL)
    {
        cout << p << endl;
        p = strtok(NULL, ";");
    }
    cout << endl;

    char str1[20] = "X=10;Y=5;Z=12";
    char *q = strtok(str1, "=;");
    while (q != NULL)
    {
        cout << q << endl;
        q = strtok(NULL, "=;");
    }

    return 0;
}