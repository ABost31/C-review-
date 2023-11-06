/*Total Purchase
A customer in a store is purchasing five items. The prices of the five items are
Price of item 1 = $15.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $12.95
Price of item 5 = $3.95
Write a program that holds the prices of the five items in five variables. Display each
item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
sales tax is 7%.*/
#include<iostream>
using namespace std;
int main(){
    double a = 15.95;
    double b = 24.95;
    double c = 6.95;
    double d = 12.95;
    double e = 3.95;
    double total = (0.07 *(a+b+c+d+e))+(a+b+c+d+e);
    cout << "Price of item : "<< a<<"\n";
    cout << "Price of item : "<< b<<"\n";
    cout << "Price of item : "<< c<<'\n';
    cout << "Price of item : "<< d<<'\n';
    cout << "Price of item : "<< e<<"\n";
    cout << "Sale tax : "<< 0.07<<"\n";
    cout << "total : "<< total;
    return 0;

}