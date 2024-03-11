/*Write a short C++ function that takes an integer n and returns the sum of
all the odd integers smaller than n.*/
#include<iostream>

void sum_of_odd(int n)
{
    int res = 0;
    for( int i =0; i < n ; i++){
        if( i%2 ==1){
            res += i;
        }
    }
    std::cout<<"The sum of all odd numbers smaller than "<< n<<" is "<<res;
}

int main()
{
    int x = 15;
    sum_of_odd(x);
    
    return 0;
}