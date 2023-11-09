/* Test Average
Write a program that asks for five test scores. The program should calculate the average test score and display it. The number displayed should be formatted in fixed-point
notation, with one decimal point of precision.*/
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double t1, t2, t3, t4,t5;

    cout<<"Enter five test scores: "<<endl;
    cin>>t1>>t2>>t3>>t4>>t5;

    cout<<" Your average score is: "<<setprecision(1)<<fixed<< (t1+t2+t3+t4+t5)/5<<endl;

    return 0;
}
