/* Ingredient Adjuster
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, and then displays the
number of cups of each ingredient needed for the specified number of cookies. 
*/

#include<iostream>

using namespace std;

int main(){
    double s = 1.5/48;
    double b = 1.0/48;
    double f = 2.75/48;
    double cookies;

    cout<<"how many coockies would you like to make?";
    cin>>cookies;
    cout<<"You need: \n";
    cout<<s*cookies<<" cup of sugar."<<endl;
    cout<<b*cookies<<" Cup of butter."<<endl;
    cout<<f*cookies<<" cup of flour."<<endl;

    return 0;


}