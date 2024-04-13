/*The greatest common divisor, or GCD, of two positive integers n and m is
the largest number j, such that n and m are both multiples of j. Euclid proposed
a simple algorithm for computing GCD(n,m), where n > m, which
is based on a concept known as the Chinese Remainder Theorem. The
main idea of the algorithm is to repeatedly perform modulo computations
of consecutive pairs of the sequence that starts (n,m, . . .), until reaching
zero. The last nonzero number in this sequence is the GCD of n and m.
For example, for n = 80,844 and m = 25,320, the sequence is as follows:*/
#include<iostream>

int GDC(int num1, int num2){
    int res = 0;
    while( num2 != 0){
        res = num1 % num2; 
        num1 = num2;
        num2 = res;
    }
    return num1;

}

int main(){
    int num1 = 80844;
    int num2 = 25320;
    std::cout<<GDC(num1,num2);

    return 0;

}