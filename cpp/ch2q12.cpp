/*Land Calculation
One acre of land is equivalent to 43,560 square feet. Write a program that calculates
the number of acres in a tract of land with 391,876 square feet.*/
#include<iostream>
using namespace std;
int main(){
    double land = 43560;
    double track = 391876;
    cout << "Acres "<< track/land<<"\n";
    return 0;
}