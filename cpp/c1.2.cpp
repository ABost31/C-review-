/*C-1.2 Write a short C++ function that takes an array of int values and determines
if there is a pair of numbers in the array whose product is even.*/
#include<iostream>

using namespace std;
/*int pair_of_n(int arr[n]){

}*/
int main(){
    /*int n;
    cout<<"How many characters would you like your array to be?"<<endl;
    cin>>n;*/

    int arr[] ={1,2,3,4,5,6,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i<size; i++){
        cout<< arr[i]<<endl;
    }
    return 0;

}