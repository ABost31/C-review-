/*Personal Information
Write a program that displays the following pieces of information, each on a separate line:
Your name
Your address, with city, state, and ZIP code
Your telephone number
Your college major
Use only a single cout statement to display all of this information. */
#include<iostream>
using namespace std;
int main(){
    string ad = "20 blabla";
    string name = "Jose";
    string state = "??";
    int zip = 12321;
    string num = "3423425235";
    string major = "Comp Science";
    cout <<" Name: "<<name<<"\n";
    cout << " Address: "<< ad <<" "<< state<<", "<<zip<<"\n";
    cout << " Telephone: "<< num<<"\n";
    cout << " College Major: "<< major<<"\n";
    return 0;
    

}