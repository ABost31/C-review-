/*Write a C++ function that takes an array containing the set of all integers
in the range 1 to 52 and shuffles it into random order. Use the built-in function
rand, which returns a pseudo-random integer each time it is called.
Your function should output each possible order with equal probability.*/
#include<iostream>
#include<random> 
#include<ctime>
void rand_order(int size){
    int arr2[size];
    for(int i =0; i<size;i++){
        arr2[i]= i+1; 
    }
    for(int i=size -1; i>0;i--){
        int position = rand()% (i+1);
        int temp = arr2[i];
        arr2[i] = arr2[position];
        arr2[position]= temp;
    }
    for(int i = 0; i <size; i++){
        std::cout<<arr2[i]<< " ";
    }


}
int main(){
    int n =52;
    srand (time(0));
    rand_order(n);
    return 0;
    
}