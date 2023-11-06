/*. Cyborg Data Type Sizes
You have been given a job as a programmer on a Cyborg supercomputer. In order to
accomplish some calculations, you need to know how many bytes the following data
types use: char, int, float, and double. You do not have any manuals, so you can’t
look this information up. Write a C++ program that will determine the amount of
memory used by these types and display the information on the screen. */
#include<iostream>
using namespace std;
int main(){
    cout << "Char uses: "<<sizeof(char)<<" bytes.\n";
    cout << "Int uses: "<<sizeof(int)<<" bytes.\n";
    cout << "Float uses: "<<sizeof(float)<<" bytes.\n";
    cout << "Double uses: "<<sizeof(double)<<" bytes.\n";
    return 0;
}