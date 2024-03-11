/*Write a short C++ function that takes a positive double value x and returns
the number of times we can divide x by 2 before we get a number less
than 2.*/
#include<iostream>

void times_n_divide(double n){
    double count = 0;

    for( ; n >=2 ; n/=2){
        count += 1;
    }
    std::cout<<count;

}
int main(){
    double n = 20;
    times_n_divide(n);
    return 0;

}