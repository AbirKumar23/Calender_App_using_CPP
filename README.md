Calendar Generator

This C++ program generates and displays a calendar for any given year. It accounts for leap years and calculates the starting day of each month. Simply enter the desired year, and the program will display the calendar month by month.

Features

Leap Year Calculation: Determines if the given year is a leap year.
First Day Computation: Calculates the first day of the year.
Formatted Monthly Calendar: Displays a neatly formatted calendar for each month.

Prerequisites

To compile and run this program, you need:

A C++ compiler (e.g., g++, clang++)
A terminal or command prompt
Installation


Usage

Upon running the executable, you will be prompted to enter a year.
Enter your desired year, and the program will display the calendar for that year month by month.

Code Overview

Here's a brief explanation of the main components of the code:

getFirstDay(int year): This function calculates the day of the week for January 1st of the given year using Zeller's Congruence algorithm.

main():

Initializes arrays for the number of days in each month and the names of the months.
Prompts the user to enter a year.
Checks if the entered year is a leap year and adjusts the days in February accordingly.
Calls getFirstDay() to determine the first day of the year.
Iterates through each month and prints the calendar, properly formatted with the correct starting day of the week.

Example

Enter your favorite year : 2024

*************** Welcome to 2024 ***************

....................January....................

   Sun   Mon   Tue   Wed   Thu   Fri   Sat

         1     2     3     4     5     6
    7     8     9    10    11    12    13
   14    15    16    17    18    19    20
   21    22    23    24    25    26    27
   28    29    30    31
...


