#include "./menu.h"


Emenu menu()
{
    int choice;
    cout << "0.EXIT \n";
    cout << "1.ACCEPT radius \n";
    cout << "2.DISPLAY raius \n";
    cout << "3.accept height \n";
    cout << "4.DISPLAY HEIGHT \n";
    cout << "5.CALCULATE VOLUME \n";
    cout << "6.DISPLAY  VOLUME \n";
    cout << "ENTER CHOICE \n";
    cin >> choice;
    return Emenu(choice);
}