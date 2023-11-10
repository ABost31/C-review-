/*  Minimum/Maximum
Write a program that asks the user to enter two numbers. The program should use the
conditional operator to determine which number is the smaller and which is the larger. */
#include<iostream>

using namespace std;

int main(){
    int n1,n2;

    cout<<"Enter two random numers: "<<endl;
    cin>>n1>>n2;

    if (n1>n2){
        cout<<n1<<" is greater than "<<n2<<endl;
    }
    else{
        cout<< n2<<" is greater than "<<n1 << endl;
    }
    return 0;
}