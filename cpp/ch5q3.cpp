/* Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays a table showing the number of millimeters that the ocean will
have risen each year for the next 25 years.*/
#include<iostream>

using namespace std;

int main(){
    double oceanlvl = 1.5, year=25,currlvl;
    cout<<"----------------Ocean's level-------------------"<<endl;
    for (int i =1; i<=year; i++){
        cout<<i << "| year the level is "<< (currlvl+=oceanlvl) <<"ml"<<endl;
        cout<<"------------------------------------------------"<<endl;
    }
    return 0;
}