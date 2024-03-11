/*Write a short C++ function that takes an array of int values and determines
if there is a pair of numbers in the array whose product is even.*/
#include<iostream>

void pair_is_even(int arr[], int size){
    int count_pairs =0;
    for(int i= 0; i < size-1 ; i ++){
        if(arr[i]*arr[i+1]%2==0){
            count_pairs+=1;
        }
    }
    std::cout<<"There are pairs of even products in the array.";
}

int main(){

    int arr[]= {1,2,3,4,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    pair_is_even(arr,size);

    return 0;

}