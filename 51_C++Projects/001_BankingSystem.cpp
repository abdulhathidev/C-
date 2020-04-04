#include <iostream>
#include <fstream>

using namespace std;

class Account
{
private:
    int AccountNumber;
    string FirstName;
    string LastName;
    double TotalBalance;
    int GetNewAccountNumber();

public:
    Account() {}
    Account(bool isExist)
    {
        DisplayAccountDetails();
    }
    Account(string firstName, string lastName)
    {
        //this->AccountNumber = accountNumber;
        this->AccountNumber = 000001;
        this->FirstName = firstName;
        this->LastName = lastName;
        //CreateAccount();
    }
    void CreateAccount()
    {
        ofstream ofs("TechhathiBank.text");
        ofs << this;
        ofs.close();
        cout << "Hi Mr. " << FirstName << " " << LastName << ". Your account has been created successfully !!!" << endl
             << " Welcome to TechHathi Bank" << endl;
    }
    friend ofstream &operator<<(ofstream &ofs, Account &account);

    friend ifstream &operator>>(ifstream &ifs, Account &account)
    {
        ifs >> account.AccountNumber >> account.FirstName >> account.LastName >> account.TotalBalance;
        return ifs;
    }
    void DisplayAccountDetails()
    {
        cout << "Account Number : " << AccountNumber << endl;
        cout << "First Name     : " << FirstName << endl;
        cout << "Last Name      : " << LastName << endl;
        cout << "Total Balance  : " << TotalBalance << endl;
    }
};

ofstream &operator<<(ofstream &ofs, Account &account)
{
    ofs << account.AccountNumber << endl
        << account.FirstName << endl
        << account.LastName << endl
        << account.TotalBalance << endl;
    return ofs;
}

int main()
{
    Account newAccount;
    newAccount = Account("Abdul", "Hathi");
    newAccount.CreateAccount();

    // ofstream ofs("test.text");
    // ofs << newAccount;
    // ofs.close();

    /*
    cout << "Welcome to TechHathi Bank" << endl
         << "Please Press the number to the below TechHathi Bank operations" << endl
         << "Create a new Bank Account                  Press Number : 1" << endl
         << "To see you Bank Balance                    Press Number : 2" << endl
         << "To withdaw an amount from your account     Press Number : 3" << endl
         << "To deplosit an amount from your account    Press Number : 4" << endl
         << "To change your name in your account        Press Number : 5" << endl
         << "To Delete your account from this Bank      Press Number : 6" << endl
         << "To Display your account details            Press Number : 7" << endl;

    int number = 0;
    Account newAccount;
    string firstName, lastName;
    cin >> number;
    switch (number)
    {
    case 1:
        cout << "Welcome to new Account creation" << endl
             << "Enter your First Name : ";
        cin >> firstName;
        cout << "Enter your Last Name : ";
        cin >> lastName;
        newAccount = Account(firstName, lastName);
        break;
    case 7:
        newAccount = Account(true);
        break;
    default:
        break;
    }
    */
}