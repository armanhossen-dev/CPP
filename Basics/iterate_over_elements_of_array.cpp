#include<iostream>
int main(){
 
    //std::string studentNames[] = {"Arman", "Aniket", "Azmain"};
    char grade_array[] = {'A','B','C','D','E','F'};
    for(int i = 0 ; i < sizeof(grade_array)/sizeof(char); i++){
        std::cout << grade_array[i] << std::endl;
    }
/*
    A
    B
    C
    D
    E
    F
*/
    return 0;
}  