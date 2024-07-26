#include <iostream>
#include<conio.h>
using namespace std;


int getFirstDay(int year)
{
    int day = ( year*365 + (( year-1) / 4) - (( year-1) / 100) + ((year-1) / 400)) % 7;
    return day;
}

int main()
{
    int dayInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string month[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    int weekDay = 0;
    int year;

    cout << "Enter your favorite year : ";
    cin >> year;
    cout << endl << endl << "*************** Welcome to " << year << " ***************" << endl;

    if(( year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        dayInMonth[1] = 29;
    }

    weekDay = getFirstDay(year);

    for(int i = 0; i < 12; i++)
    {
        cout << endl << endl << "...................." << month[i] << "...................." << endl << endl;
        cout << "   Sun   Mon   Tue   Wed   Thu   Fri   Sat" << endl << endl;

        for (int spaceCounter = 1; spaceCounter <= weekDay; spaceCounter++)
        {
            cout << "      ";
        }

        for(int j = 1; j <= dayInMonth[i]; j++)
        {
            if (j < 10)
            {
                cout << "     " << j;
            }
            else
            {
                cout << "    " << j;
            }

            weekDay++;

            if (weekDay > 6)
            {
                weekDay = 0;
                cout << endl;
            }
        }

        cout << endl;
    }

    getch();
}
