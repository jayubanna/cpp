#include <iostream>
using namespace std;

class Bank
{
private:
    int acnumber[100];
    string acname[100];
    string actype[100];
    string acbranch[100];
    string acbalance[100];
    int recordCount = 0;

public:
    void addBank()
    {
        int number;
        string name, type, branch, balance;
        cout << "Enter Bank  Number: ";
        cin >> number;
        cout << "Enter Bank  Name: ";
        cin >> name;
        cout << "Enter type: ";
        cin >> type;
        cout << "Enter branch: ";
        cin >> branch;
        cout << "Enter Bank balance: ";
        cin >> balance;

        acnumber[recordCount] = number;
        acname[recordCount] = name;
        actype[recordCount] = type;
        acbranch[recordCount] = branch;
        acbalance[recordCount] = balance;
        recordCount++;
    }

    void searchBank()
    {
        int number;
        cout << "Search Record By A/C Number: ";
        cin >> number;
        cout << "\n\n\n";

        for (int i = 0; i < recordCount; i++)
        {
            if (acnumber[i] == number)
            {
                cout << "Bank Number:" << acnumber[i] << endl;
                cout << "Bank Name:" << acname[i] << endl;
                cout << "type :" << actype[i] << endl;
                cout << "branch:" << acbranch[i] << endl;
                cout << "Bank balance:" << acbalance[i] << endl
                     << endl;
                break;
            }
            else
            {
                cout << "No record found for Bank number..." << endl;
            }
        }
    }
};

int main()
{
    Bank rr;
    int choice;

    do
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            rr.addBank();
            break;
        case 2:
            rr.searchBank();
            break;
        default:
            cout << "Please try again." << endl;
        }
    } while (choice > 0 && choice < 3);

    return 0;
}