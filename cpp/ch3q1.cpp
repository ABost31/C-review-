/*Miles per Gallon
Write a program that calculates a car’s gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold and the number of miles it can
be driven on a full tank. It should then display the number of miles that may be driven
per gallon of gas.*/

#include<iostream>
using namespace std;

int main(){
    double miles;
    double galons;
    cout << "Enter the amount of gallons your car can hold: \n";
    cin >> galons;
    cout << "Enter the number of miles the car can drive with a full tank: \n";
    cin >> miles;

    cout<<"You can drive "<<miles/galons <<" mpg.";
    return 0;

}