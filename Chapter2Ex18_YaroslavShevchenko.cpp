/*
Tite Chapter 2 Exercise 18 - Energy Drink Consumption
File name:Chapter2Exe18_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 09/20/2024
Requirements:
A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more
energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. 
Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of the number of customers that were surveyed

*/

#include <iostream>
using namespace std;
int main()
{
    int custumerCount;
    cout << "Enter the number of people surveyed: ";
    cin >> custumerCount;

    int purchaseCount = custumerCount * .15;
    int preferCount = purchaseCount * .58;



    cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week: " << purchaseCount << endl;
    cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks: " << preferCount << endl;

}


