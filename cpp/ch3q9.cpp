/* How Many Calories?
A bag of cookies holds 30 cookies. The calorie information on the bag claims that there
are 10 “servings” in the bag and that a serving equals 300 calories. Write a program
that asks the user to input how many cookies he or she actually ate and then reports
how many total calories were consumed.*/

#include<iostream>

using namespace std;

int main(){
    double b= 30,spb=10,s=300, nc;

    cout<<"how many cookies did you eat: "<<endl;
    cin>>nc;

    cout<<"you have consumed "<<(nc/3)*300<< " calories";
    return 0 ;
    
}