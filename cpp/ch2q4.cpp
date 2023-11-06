//Restaurant Bill
//Write a program that computes the tax and tip on a restaurant bill for a patron with
//a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
//be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
//amount, and total bill on the screen. 
#include<iostream>
using namespace std;

int main(){
    double meal= 88.67;
    double tax = 0.0675;
    double tip = 0.20;

    double total = (tax*meal)+(tip*meal)+meal;

    cout <<"Meal Cost :  "<< meal<<'\n';
    cout << "Tax Amount : "<< tax <<"\n";
    cout << "tip :        "<< tip <<"\n";
    cout << "Total amount  : "<< total;

    return 0;
}