/*Write an efficient C++ function that takes any integer value i and returns
2i, as a long value. Your function should not multiply 2 by itself i times;
there are much faster ways of computing 2i.*/
#include<iostream>
#include<cmath>


long squares(int num){
    return 1L << num;
}
int main(){
    int n = 3;
    std::cout<<squares(n);
    return 0;
}