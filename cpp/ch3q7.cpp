/* Box Office
A movie theater only keeps a percentage of the revenue earned from ticket sales. The
remainder goes to the movie distributor. Write a program that calculates a theater’s
gross and net box office profit for a night. The program should ask for the name of the
movie, and how many adult and child tickets were sold. (The price of an adult ticket is
$10.00 and a child’s ticket is $6.00.) It should display a report similar to
Movie Name: “Wheels of Fury”
Adult Tickets Sold: 382
Child Tickets Sold: 127
Gross Box Office Profit: $ 4582.00
Net Box Office Profit: $ 916.40
Amount Paid to Distributor: $ 3665.60
Assume the theater keeps 20 percent of the gross box office profit.  */
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    string name;
    double a,k,ap = 10.00, kp=6.00, perc= .20;

    cout << "Enter the name of the movie you want to watch:"<<endl;
    getline(cin, name);
    cout<<"Enter number of tickets for adults: "<<endl;
    cin>>a;
    cout<<"Enter number of tickets for Kids: "<<endl;
    cin>>k;

    cout<<setprecision(2)<<fixed;
    cout<<"Movie name:                 "<< name<<endl;
    cout<<"Adult tickets sold:         "<<a<<endl;
    cout<<"Kids tickets sold:          "<<k<<endl;
    cout<<"Gross Box Office Profit:   $"<<(a*ap)+(k*kp)<<endl;
    cout<<"Net Box Office Profit:     $"<<((a*ap)+(k*kp))*perc<<endl;
    cout<<"Amount Paid to Distributor:$"<<(a*ap)+(k*kp)-(((a*ap)+(k*kp))*perc)<<endl;

    return 0;
    

}