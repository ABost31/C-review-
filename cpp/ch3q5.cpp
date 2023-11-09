/*Male and Female Percentages
Write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.
Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 60%.
 */

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double m, f;

    cout<< "Enter is number of male students: ";
    cin>>m;
    cout<<" \nEnter the number of female students: ";
    cin>>f;

    cout<<double(m/(m+f))*100 <<"\% are male students"<<endl;
    cout<<double(f/(m+f))*100 <<"\% are female students"<<endl;


    return 0;
    
}