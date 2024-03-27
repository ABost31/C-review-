/*Write a short C++ program that takes two arguments of type STL vector<
double>, a and b, and returns the element-by-element product of a
and b. That is, it returns a vector c of the same length such that c[i] =
a[i] ·b[i].*/
#include<iostream>
#include<vector>

std::vector<double> elem_product(std::vector<double>vec_num1, std::vector<double>vec_num2){
    std::vector<double> newvec;
    if(vec_num1.size()==vec_num2.size()){
        for(int i = 0; i < vec_num1.size();i++){
            newvec.push_back(vec_num1[i]*vec_num2[i]);
        }

    }
    else{
        std::cout<<"Vectors shoudl be of the same length."<<std::endl;
    }
    return newvec;

}
int main(){
    std::vector<double> num1 = {2,3,4,6};
    std::vector<double> num2 = {3,4,2,5};
    std::vector<double> elem = elem_product(num1,num2);

    for(int i =0; i<elem.size(); i++){
        std::cout<<elem[i]<<" ";
    }

    return 0;
}