/*Membership Fees Increase
A country club, which currently charges $2,500 per year for membership, has
announced it will increase its membership fee by 4% each year for the next six years.
Write a program that uses a loop to display the projected rates for the next six years.*/
#include<iostream>

using namespace std;

int main(){
    double curr=2500, perc=0.04;
    for (int i = 1; i<=6; i++){
        cout<<" Year "<< i << " the price is "<< curr <<" Dollars. "<<endl;
        curr+=(curr*perc);
    }
    return 0;
}