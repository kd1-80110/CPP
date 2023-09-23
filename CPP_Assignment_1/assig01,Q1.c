#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day=31;
    ptrDate->month=05;
    ptrDate->year=2000;
}
void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter the day = ");
    scanf("%d", &ptrDate->day);
    printf("Enter the month = ");
    scanf("%d", &ptrDate->month);
    printf("Enter the year = ");
    scanf("%d", &ptrDate->year);
}
void printDateOnConsole(struct Date* ptrDate)
{
    printf("the date is= %d/%d/%d", ptrDate->day, ptrDate->month, ptrDate->year);
}
int main()
{
    struct Date d1;
    int choice;
    do
    {
        printf("\nEnter choice 1 \n 2. \n 3. \n 0.exit \n"); // ctrl shift i
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            initDate(&d1);
            printDateOnConsole(&d1);
            break;

        case 2:
            acceptDateFromConsole(&d1);
            break;
        case 3:
            // acceptDateFromConsole(&d1);
            printDateOnConsole(&d1);

        default:
            break;
        }
    } while (choice != 0);
}