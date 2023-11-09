/* Automobile Costs
Write a program that asks the user to enter the monthly costs for the following
expenses incurred from operating his or her automobile: loan payment, insurance, gas,
oil, tires, and maintenance. The program should then display the total monthly cost of
these expenses, and the total annual cost of these expenses. */
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double lp,ins,gas,oil,tires,maint;
    cout<<"Enter the following expenses:"<<endl;
    cout<<"Loan Payment: ";
    cin>>lp;
    cout<<"Insurance Payment: ";
    cin>>ins;
    cout<<"Gas Payment: ";
    cin>>gas;
    cout<<"Oil Payment: ";
    cin>>oil;
    cout<<"Tires Payment: ";
    cin>>tires;
    cout<<"maintenance Payment: ";
    cin>>maint;
    cout<<setprecision(2)<<fixed;

    cout<<"Your monthly expenses: $"<< lp+ins+gas+oil+tires+maint<<endl;
    return 0;
}