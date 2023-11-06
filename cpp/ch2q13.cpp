/*Circuit Board Price
An electronics company sells circuit boards at a 35 percent profit. Write a program that
will calculate the selling price of a circuit board that costs $14.95. Display the result
on the screen. */
#include<iostream>
using namespace std;

int main(){
    double profit = 0.35;
    double price = 14.95;
    cout<< " Selling price of the circuit board is "<< (profit*price)+price<<"\n";
    return 0;
}