/* How Much Insurance?
Many financial experts advise that property owners should insure their homes or buildings for at least 80 percent of the amount it would cost to replace the structure. Write a
program that asks the user to enter the replacement cost of a building and then displays
the minimum amount of insurance he or she should buy for the property.*/
#include<iostream>

using namespace std;

int main(){
    double insur=.80, cost;

    cout<<"Enter the replacement cost of the structure: " << endl;
    cin>>cost;

    cout<<"The minimun amount of insurance you should buy is "<< cost*insur<<endl;

    return 0;
}