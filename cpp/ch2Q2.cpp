// Sales Prediction
//The East Coast sales division of a company generates 58 percent of total sales. Based
//on that percentage, write a program that will predict how much the East Coast division
//will generate if the company has $8.6 million in sales this year. 
#include<iostream>
using namespace std;

int main (){
    double perc = 0.58;
    double earning = 8600000;
    double res = perc * earning;
    cout << res;
    return 0;

}