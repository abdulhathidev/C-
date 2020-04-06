#include <iostream>
#include <fstream>

using namespace std;

class Account
{

public:
    int AccountNumber;
    string FirstName;
    string LastName;
    double TotalBalance;
    int GetNewAccountNumber();
    Account() {}
    Account(string firstName, string lastName)
    {
        //this->AccountNumber = accountNumber;
        this->AccountNumber = 000001;
        this->FirstName = firstName;
        this->LastName = lastName;
    }
};

class TechHathiBank
{
private:
    string FileName = "TechhathiBank.text";
    Account currentAccount;

public:
    friend ofstream &operator<<(ofstream &ofs, Account &account);
    friend ifstream &operator>>(ifstream &ifs, Account &account);
    TechHathiBank()
    {
    }

    void CreateAccount(Account &account)
    {
        ofstream ofs;
        ofs.open(FileName, ofstream::app);
        ofs << &account;
        ofs.close();
        cout << "Hi Mr. " << account.FirstName << " " << account.LastName << ". Your account has been created successfully !!!" << endl
             << " Welcome to TechHathi Bank" << endl;
    }

    void ReadAccount(int accountNumber)
    {
    }

    void DisplayAccountDetails(Account account)
    {
        cout << "Please enter your Bank Account number : ";
        int number;
        cin >> number;
        cout << "Account Number : " << account.AccountNumber << endl;
        cout << "First Name     : " << account.FirstName << endl;
        cout << "Last Name      : " << account.LastName << endl;
        cout << "Total Balance  : " << account.TotalBalance << endl;
    }
    /**/
};

ofstream &operator<<(ofstream &ofs, Account &account)
{
    //account = Account();
    ofs << account.AccountNumber << "|"
        << account.FirstName << "|"
        << account.LastName << "|"
        << account.TotalBalance << endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs, Account &account)
{
    ifs >> account.AccountNumber >> account.FirstName >> account.LastName >> account.TotalBalance;
    return ifs;
}

int main()
{
    /*
    Account newAccount;
    newAccount = Account("Abdul", "Hathi");
    newAccount.CreateAccount();

    // ofstream ofs("test.text");
    // ofs << newAccount;
    // ofs.close();
    */
    ifstream ifs("TechhathiBank.text");
    if (ifs)
    {
        while (!ifs.eof())
        {
            Account acc;
            ifs >> acc;
            //DisplayAccountDetails(*account);
        }
    }

    int input;
    while (input != 0)
    {
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
        ifstream ifs("TechhathiBank.text");
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
            if (ifs)
            {
                while (!ifs.eof())
                {
                    Account acc;
                    ifs >> acc;
                    //DisplayAccountDetails(*account);
                }
            }
            break;
        default:
            break;
        }
    }
}