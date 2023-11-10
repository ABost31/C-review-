/* Magic Dates
The date June 10, 1960 is special because when we write it in the following format, the
month times the day equals the year.
 6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a
two-digit year. The program should then determine whether the month times the day is
equal to the year. If so, it should display a message saying the date is magic. Otherwise
it should display a message saying the date is not magic.*/
#include<iostream>

using namespace std;

int main(){
    int month, day, year;

    cout<<"Enter the Month in numeric form: "<<endl;
    cin>>month;
    cout<<"Enter a day: "<<endl;
    cin>>day;
    cout<<"Enter two digit year: "<<endl;
    cin>>year;

    if(year ==(month*day)){
        cout<<"This is a magic date because "<<month<<"/"<<day<<"/"<<year;
    }
    else{
        cout<<"This is not a magic year :( sowwy...."<<endl;
    }
    return 0;
    
}