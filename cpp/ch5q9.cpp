/*Hotel Occupancy
Write a program that calculates the occupancy rate for a hotel. The program should
start by asking the user how many floors the hotel has. A loop should then iterate once
for each floor. In each iteration, the loop should ask the user for the number of rooms
on the floor and how many of them are occupied. After all the iterations, the program
should display how many rooms the hotel has, how many of them are occupied, how
many are unoccupied, and the percentage of rooms that are occupied. The percentage
may be calculated by dividing the number of rooms occupied by the number of rooms.
NOTE: It is traditional that most hotels do not have a thirteenth floor. The loop in
this program should skip the entire thirteenth iteration.
294 Chapter 5 Loops and Files
Input Validation: Do not accept a value less than 1 for the number of floors. Do not
accept a number less than 10 for the number of rooms on a floor. */
#include<iostream>
using namespace std;

int main(){
    int floors=0, rooms =0, roc=0;
    double troom=0, troc=0;
    cout<<"how many floors are in the hotel: \n";
    cin>> floors;
    cout<<"------------------------------------------\n";
    for(int i =1;i <= floors; i++){
        if (i == 13)
        {
            cout<<"Skipping floor 13....\n";
            cout<<"------------------------------------------\n";
            continue;
        }
        else{
            cout<<"how many rooms are in "<< i <<" floor?\n";
            cin>>rooms;
            cout<<"How many rooms are occupied?"<<endl;
            cin>>roc;
            cout<<"------------------------------------------\n";
            troom +=rooms;
            troc +=roc;
        }
    }
    
    cout<< "there are "<<troom<<" rooms in the hotel, "<<troc<<" are occupied and "<<(troom-troc)<<" rooms are unoccupied\n";
    cout<<(troc/troom)*100<<"\% of rooms are occupied\n";
    

    return 0;

}