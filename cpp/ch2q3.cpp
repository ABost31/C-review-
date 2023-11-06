//Sales Tax
//Write a program that will compute the total sales tax on a $95 purchase. Assume the
//state sales tax is 4 percent and the county sales tax is 2 percent. 
#include<iostream>
using namespace std;

int main(){
    double t = 95.00;
    double slt =0.04;
    double cslt = 0.02;

    double total = ((slt+cslt)*t)+t;

    cout << "the total is "<< total;
    return 0;
}