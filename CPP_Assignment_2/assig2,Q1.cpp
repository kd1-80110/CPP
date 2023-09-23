#include <iostream>
using namespace std;

namespace Nstudent
{
    class student
    {
    private:
        int rollno;
        string name;
        float marks;

    public:
        void initStudent()
        {
            this->rollno = 80110;
            this->name = 'Suyash';
            this->marks = 16;
        }
        void acceptStudentFromConsole()
        {
            cout << "student roll no";
            cin >> this->rollno;
            cout << "student name";
            cin >> this->name;
            cout << "student marks";
            cin >> this->marks;
        }
        void printStudentOnConsole()
        {
            cout << "Name -" << name << endl;
            cout << "ROLLNO -" << rollno << endl;
            cout << "MARKS -" << marks << endl;
        }
    };
}
using namespace Nstudent;
int main()
{
    student sm;
    int choice;
    do
    {
        cout << "1.INITIALISE STUDENT" << endl;
        cout << "2.DISPLAY STUDENT " << endl;
        cout << "3.ACCEPT STUDENT DATA" << endl;
        cout << "0.EXIT" << endl;
        cout << " ENTER YOUR CHOICE" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            sm.initStudent();
            break;

        case 2:
            sm.acceptStudentFromConsole();
            break;

        case 3:
            sm.printStudentOnConsole();
            break;

        default:
            break;
        }
    } while (choice != 0);
}
