/*Write a short C++ function, isTwoPower, that takes an int i and returns
true if and only if i is a power of 2. Do not use multiplication or division,
however.*/
#include<iostream>

void isTwoPower(int i);

int main(){
    int n;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>n;
    isTwoPower(n);

    return 0;
}

void isTwoPower(int i){
    if( i%2 == 0){
        std::cout<<" true"<<std::endl;
    }
    else{
        std::cout<<"False"<< std::endl;
    }

}