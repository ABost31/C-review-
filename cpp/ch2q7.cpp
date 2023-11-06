/*Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be
in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 10 years */
#include<iostream>
using namespace std;
int main(){
    double oclv = 1.5;
    cout << " The ocean level in 5 years will be : "<< (oclv*5)<<" ml \n";
    cout << " The ocean level in 7 years will be : "<< (oclv*7)<<" ml \n";
    cout << " The ocean level in 10 years will be : "<< (oclv*10)<<" ml \n";
    return 0;
}