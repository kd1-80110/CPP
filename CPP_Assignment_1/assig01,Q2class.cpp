#include<iostream>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate()
    {
        day = 31;
        month = 05;
        year = 2000;
    }
    void acceptDateFromConsole()
    {
        cout << "please enter the day" << endl;
        cin >>day;

        cout << "please enter the month" << endl;
        cin >>month;

        cout << "please enter the year" << endl;
        cin >>year;
    }
    void printDateOnConsole()
    {
        cout << "DATE =" << day << "/" << month << "/" << year << endl;
    }
    bool isLeapYear()
    {
            
        if (((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0)))
            return true;
        else
            return false;
    }
};
int main()
    {
        Date s;
        int choice;
        do
        {
            cout << "\n MENU" << endl;
            cout << "\n1) init Date" << endl;
            cout << "2) acept Date" << endl;
            cout << "3) print Date" << endl;
            cout << "4) Check if year is leap" << endl;
            cout << "0) EXIT\n" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                s.initDate();
                break;

            case 2:
                s.printDateOnConsole();
                break;

            case 3:
                s.acceptDateFromConsole();
                break;

            case 0:
                cout << "EXITED" << endl;
                break;
            case 4:
                if(s.isLeapYear())
                {
                    cout <<" is leap year" << endl;
                }
                else
                {
                    cout <<" is normal year" << endl;
                }
                break;  

            default:
                cout << "Invalid Choice" << endl;
                break;
            }
        } while (choice != 0);

        return 0;
}