/* Pennies for Pay
Write a program that calculates how much a person would earn over a period of time
if his or her salary is one penny the first day and two pennies the second day, and continues
to double each day. The program should ask the user for the number of days.
Display a table showing how much the salary was for each day, and then show the
total pay at the end of the period. The output should be displayed in a dollar amount,
not the number of pennies.
Input Validation: Do not accept a number less than 1 for the number of days worked.*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int days;
    cout<<"Enter the number of days worked: ";
    cin>>days;
    double sum =0;
    if (days >=1){
        for(int i=1;i <= days;i++){

            cout<<(sum/100)<<"$ dollars in "<< i <<" days."<<endl;
            sum =pow(2,i);
        }
    }
    else{
        cout<<" Cannot enter a number less than 1.";
    }
    return 0;
}