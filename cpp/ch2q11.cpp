/*Distance per Tank of Gas
A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town
and 28.9 miles per gallon when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of gas when driven in town
and when driven on the highway.
Hint: The following formula can be used to calculate the distance:
 Distance  Number of Gallons  Average Miles per Gallon*/
 #include<iostream>
 using namespace std;
 int main(){
    double tank = 20;
    double avgT = 23.5;
    double avgh = 28.9;
    cout<< "Your car can travel "<< (20*23.5)<< " in the town.\n";
    cout<< "Your car can travel "<< (20*28.9)<<" in highway.\n";

    return 0;
    
 }