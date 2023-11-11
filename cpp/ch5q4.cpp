/* Calories Burned Running on a particular treadmill you burn 3.6 calories per minute. Write a program that
uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.*/
#include<iostream>

using namespace std;

int main(){
    double calories = 3.6,burned=0, minutes=30;
    for (int i = 5;i<=minutes; i+=5){
        cout<<"minute "<< (i) <<" you have burned "<< (burned=calories*i)<<" calories."<<endl;
    }
    return 0;
}