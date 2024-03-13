/*Write a C++ function that takes an STL vector of int values and determines
if all the numbers are different from each other (that is, they are
distinct).*/
#include<iostream>
#include<vector>

bool num_diferent( std::vector<int>& vec){
    for( int i = 0; i < vec.size()-1; i++){
        if(vec[i]==vec[i+1])
        {
            return false;
        }
    }
    return true;

}
void sort_vector(std::vector<int>& vec){
    for(int i = 0; i < vec.size() -1; ++i){
        for(int j = 0; j <vec.size()-i-1; ++j){
            if(vec[j] >vec[j+1]){
                int temp =vec[j];
                vec[j] = vec[j+1];
                vec[j+1] =temp;

                }

        }
    }
}

int main(){
    std::vector<int> vec={1,1,2,3,4,5,6,7,7,6,8,9,9,2,1,4,0,2,3};
    sort_vector(vec);
    if(num_diferent(vec)){
        std::cout<<"All numbers are distinct. "<< std::endl;
    }
    else{
        std::cout<<"Some numbers are the same " <<std::endl;
    }

    return 0;
}
