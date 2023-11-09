/* Average Rainfall
Write a program that calculates the average rainfall for three months. The program
should ask the user to enter the name of each month, such as June or July, and the
amount of rain (in inches) that fell each month. The program should display a message
similar to the following:
The average rainfall for June, July, and August is 6.72 inches. */
#include<iostream>
#include<iomanip> 

using namespace std;

int main(){
    string m1,m2,m3;
    double r1,r2,r3;

    cout << "Enter three months to calculate the average rainfall: \n";
    cin>> m1>>m2>>m3;

    cout<< "Enter the amount of rain that fell in inches:\n";
    cin>>r1>>r2>>r3;

    cout <<" The average rainfall in the months of "<<m1<<", "<<m2<<" and "<<m3<<" is "<<setprecision(1)<<fixed<<(r1+r2+r3)/3 <<" inches.";

    return 0;
}