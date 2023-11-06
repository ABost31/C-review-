/*Energy Drink Consumption
A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 58 percent of
them prefer citrus-flavored energy drinks. Write a program that displays the following:
• The approximate number of customers in the survey who purchase one or more
energy drinks per week
• The approximate number of customers in the survey who prefer citrus-flavored energy
drinks */
#include<iostream>
using namespace std;
int main(){
    double costumer = 16500.00;
    double percentage = 0.15;
    double citrus = 0.58;
    cout<< percentage*costumer << " customers buy one or more energy drinks per week."<<"\n";
    cout<< citrus*costumer << " customers perfer citrus-flavored energy drinks."<<"\n";

    return 0;
    
}