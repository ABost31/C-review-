/*Miles per Gallon
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
 MPG  Miles Driven/Gallons of Gas Used*/
 #include<iostream>
 using namespace std;
 int main(){
    double gallons = 15;
    double travel = 375;

    double mpg = 375/15;

    cout<<"Your vehicle can get "<< mpg <<" MPG.\n";
    return 0;
 }