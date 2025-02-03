/* Program File Name: Chapter2Exercise18.cpp
Programmer: Bryan Hurley
Date: February 2025
Requirements: A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or 
more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. 
Write a program that displays the following:
• The approximate number of customers in the survey who purchase one or more energy drinks per week.
• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.
*/

#include <iostream>
using namespace std;
int main()
{
    int nCust = 16500; //Number of Customers
    cout << "Number of Customers Who Buy 1 Or More Drinks a Week: " << nCust * 0.15 << "\n"; //Number of Customers * 15 percent who buy
    cout << "Number of Customers Who Buy 1 or More Drinks a Week and Perfer Citrus: " << nCust * 0.15 * 0.58 << "\n"; //Number of Customers * 15 percent who buy * 58 percent who perfer citrus
}
