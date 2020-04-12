#include <iostream>
#include <fstream>
using namespace std;

class Account
{
public:
    int AccountNumber;
    string FirstName;
    string LastName;
    double Balance;
    friend ofstream &operator<<(ofstream &ofs, Account &account);
    friend ifstream &operator>>(ifstream &ifs, Account &account);
};
ofstream &operator<<(ofstream &ofs, Account &account)
{
    ofs << account.AccountNumber << "|"
    << account.FirstName << "|"
    << account.LastName << "|"
    << account.Balance << endl;
    return ofs;
}

class TechHathiBank
{
private:
    string dataFile;
    int LastAccountNumber;
    
public:
    Account account;
    TechHathiBank()
    {
        dataFile = "TechHathiBnk.txt";
        LastAccountNumber = 1000;
    }
    void CreateAccount()
    {
        if (LastAccountNumber == 1000)
            GenerateAccountNumber();
        account.AccountNumber = ++LastAccountNumber;
        
        ofstream ofs(dataFile, ofstream::app);
        if (account.Balance == 0.00)
            account.Balance = 10.00;
        ofs << account;
        ofs.close();
        cout << "Hi Mr. " << account.FirstName << " " << account.LastName << ". Your account has been created successfully !!!" << endl<< endl;
    }
    void ReadAccountByPointer(char *pointer)
    {
        int i = 0;
        while (pointer != NULL)
        {
            i++;
            //cout << i << ". " << pointer << endl;
            switch (i)
            {
                case 1:
                    account.AccountNumber = stoi(pointer);
                    break;
                case 2:
                    account.FirstName = pointer;
                    break;
                case 3:
                    account.LastName = pointer;
                    break;
                case 4:
                    account.Balance = stod(pointer);
                    break;
                default:
                    break;
            }
            pointer = strtok(NULL, "|");
        }
    }
    int GenerateAccountNumber()
    {
        ifstream ifs;
        ifs.open("TechHathiBnk.txt");
        if (!ifs)
            cout << "File not exist " << endl;
        else if (ifs.is_open())
        {
            while (!ifs.eof())
            {
                char line[1000];
                ifs.getline(line, 1000);
                char *pointer1 = strtok(line, "|");
                if (pointer1 != NULL)
                {
                    int number = stoi(pointer1);
                    if (LastAccountNumber < number)
                        LastAccountNumber = number;
                }
            }
        }
        ifs.close();
        return LastAccountNumber;
    }
    void FindAccountByAccountNumber(int accountNumber)
    {
        ifstream ifs;
        ifs.open(dataFile);
        if (ifs)
        {
            while (!ifs.eof())
            {
                char line[100];
                ifs.getline(line, 100);
                char *pointer = strtok(line, "|");
                if (pointer != NULL && stoi(pointer) == accountNumber)
                {
                    ReadAccountByPointer(pointer);
                    DisplayAccountDetails(account);
                    //break;
                }
            }
        }
        ifs.close();
    }
    void DisplayAccountDetails(Account account)
    {
        cout << "Account Number : " << account.AccountNumber << endl;
        cout << "First Name     : " << account.FirstName << endl;
        cout << "Last Name      : " << account.LastName << endl;
        cout << "Total Balance  : " << account.Balance << endl
        << endl;
    }
    void ReadAccounts()
    {
        ifstream ifs(dataFile);
        if (ifs)
        {
            while (!ifs.eof())
            {
                char line[100];
                ifs.getline(line, 100);
                char *pointer = strtok(line, "|");
                int i = 0;
                while (pointer != NULL)
                {
                    i++;
                    cout << i << ". " << pointer << endl;
                    pointer = strtok(NULL, "|");
                }
                
                //DisplayAccountDetails(*account);
            }
        }
        ifs.close();
    }
    void ReadBankBalance(int accountNumber)
    {
        ifstream ifs(dataFile);
        if (ifs)
        {
            while (!ifs.eof())
            {
                char line[100];
                ifs.getline(line, 100);
                char *pointer = strtok(line, "|");
                //int i = 0;
                if (pointer != NULL && stoi(pointer) == accountNumber)
                {
                    ReadAccountByPointer(pointer);
                }
            }
        }
    }
    void Deposit(int accountNumber, double depositAmount)
    {
        ifstream ifs;
        char line[100];
        ifs.open(dataFile);
        if (ifs)
        {
            ifs >> line;
            cout << line << endl;
            
//            while (!ifs.eof())
//            {
//                string line;
//                getline(ifs, line);
//
//            }
        }
    }
    ~TechHathiBank()
    {
    }
};

int main()
{
    // TechHathiBank bank;
    // cout << bank.GenerateAccountNumber() << endl;
    
    // ifstream ifs;
    // ifs.open("TechHathiBnk.txt");
    // if (!ifs)
    //     cout << "File not exist " << endl;
    // else if (ifs.is_open())
    // {
    //     cout << "File exist " << endl;
    //     while (!ifs.eof())
    //     {
    //         char line[1000];
    //         ifs.getline(line, 1000);
    //         cout << line << endl;
    //         char *pointer1 = strtok(line, "|");
    //         if (pointer1 != NULL)
    //         {
    //             int number = stoi(pointer1);
    //             cout << number << endl;
    //         }
    //     }
    // }
    // ifs.close();
    
    // Account account;
    // account.FirstName = "Abdul";
    // account.LastName = "Hathi";
    // bank.account = account;
    // bank.CreateAccount();
    /*int accountNumber;
     cout << "Please enter your account number : " << endl;
     cin >> accountNumber;
     bank.FindAccountByAccountNumber(accountNumber);
     
     */
    TechHathiBank bank;
    int input = -1;
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
        Account account;
        cin >> number;
        int accountNumber = 0;
        switch (number)
        {
            case 1:
                cout << "Welcome to new Account creation" << endl
                << "Enter your First Name : ";
                cin >> account.FirstName;
                cout << "Enter your Last Name : ";
                cin >> account.LastName;
                cout << "Enter your initial deposit : ";
                cin >> account.Balance;
                bank.account = account;
                bank.CreateAccount();
                break;
            case 2:
                cout << "Please enter your account number : ";
                cin >> accountNumber;
                bank.ReadBankBalance(accountNumber);
                cout << "Your account Balance is : $" << bank.account.Balance << endl
                << endl;
                break;
            case 3:
                break;
            case 4:
                bank.Deposit(accountNumber, 100);
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                cout << "Please enter your account number : ";
                cin >> accountNumber;
                bank.FindAccountByAccountNumber(accountNumber);
                cin>>accountNumber;
                break;
            default:
                break;
        }
    }
}
