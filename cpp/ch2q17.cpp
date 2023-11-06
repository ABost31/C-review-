/* . Stock Commission
Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
stockbroker a 2 percent commission for the transaction. Write a program that calculates and displays the following:
• The amount paid for the stock alone (without the commission)
• The amount of the commission
• The total amount paid (for the stock plus the commission)*/
#include<iostream>
using namespace std;
int main(){
    double shares = 750.00;
    double price = 35.00;
    double comission = 0.02;
    cout<< " Amount paid for the stock: "<< shares*price<<"\n";
    cout<<" Amount of the comission: "<< comission*(shares*price)<<"\n";
    cout << " Total amount: "<<(comission*(shares*price)) +(shares*price)<<"\n";

    return 0;

}