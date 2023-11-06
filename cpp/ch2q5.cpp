/*Average of Values
To get the average of a series of values, you add the values up and then divide the sum
by the number of values. Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. The program should first calculate the sum
of these five variables and store the result in a separate variable named sum. Then, the
program should divide the sum variable by 5 to get the average. Display the average
on the screen.*/
#include<iostream>
using namespace std;

int main(){
    int a = 28;
    int b = 32;
    int c = 37;
    int d = 24;
    int e = 33;

    double sum = a+b+c+d+e;
    double avrg = sum/5;
    cout << "the average is "<< avrg;

    return 0;
}