#include <iostream>

using namespace std;

int main()
{
    cout << "strlen     : " << strlen("abdulhathi") << endl;
    char strDes[100] = "Abdul Hathi ";
    cout << "strcat     : " << strcat(strDes, "Mohamed ") << endl;
    cout << "strncat    : " << strncat(strDes, "Hussain", 5) << endl;
    cout << "strcpy     : " << strcpy(strDes, "Aysha") << endl;
    cout << "strncpy    : " << strncpy(strDes, "Jawahar", 1) << endl;
    if (strstr("Programming", "k") != NULL)
        cout << "strstr     : " << strstr("Programming", "k") << endl;
    cout << "strchr     : " << strchr("Programming", 'g') << endl;
    cout << "strchr     : " << strrchr("programming", 'm') << endl;
    char s1[10] = "minor";
    char s2[10] = "elder";
    cout << "strcmp     : " << strcmp(s1, s2) << endl;
    cout << "strtol     : " << strtol("1234", NULL, 10) << endl;
    cout << "strtof     : " << strtof("1234.1212", NULL) << endl;
    cout << "strtod     : " << strtod("1234.1212", NULL) << endl;
    return 0;
}