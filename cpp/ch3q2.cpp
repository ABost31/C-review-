/*. Stadium Seating
There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales. Format your dollar amount in fixed-point notation, with two
decimal places of precision, and be sure the decimal point is always displayed.  */
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double A = 15.00;
    double B = 12.00;
    double C = 9.00;
    int a1;
    int b1;
    int c1;
    cout << "Ticket sales:"<<endl;
    cout<<"tickets sold for A";
    cin >> a1;
    cout<<"tickets sold for B";
    cin >> b1;
    cout<<"tickets sold for C";
    cin >> c1;
    double res =(A*a1)+(B*b1)+(C*c1);

    cout << "You generated "<< setprecision(2)<<fixed<<res<< " income from the ticket sales";

    return 0; 

}