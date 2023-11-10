/* Time Calculator
Write a program that asks the user to enter a number of seconds.
• There are 60 seconds in a minute. If the number of seconds entered by the user is
greater than or equal to 60, the program should display the number of minutes in
that many seconds.
• There are 3,600 seconds in an hour. If the number of seconds entered by the user is
greater than or equal to 3,600, the program should display the number of hours in
that many seconds.
• There are 86,400 seconds in a day. If the number of seconds entered by the user is
greater than or equal to 86,400, the program should display the number of days in
that many seconds. 
*/
#include<iostream>

using namespace std;

int main(){
    double sec;
    cout<<"Enter seconds: ";
    cin>>sec;
    
    if(sec >= 60 & sec <3600 ){
        cout<<"There are "<<sec/60<<" minutes";
    }
    else if(sec >=3600 && sec < 86400){
        cout<<"There are "<<sec/3600<<" hours.";
    }
    else if(sec >= 86400){
        cout<<"There are "<<sec/86400 <<" days.";
    }
    else{
        cout<<"There are "<<sec<<" seconds."<<endl;
    }
    return 0;
}