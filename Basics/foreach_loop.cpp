#include<iostream>
int main(){ 
    /*
    foreach loop \n
    loop that eases the traversal over an iterable data set
    */
    char grade_array[] = {'A','B','C','D','E','F'};
    /*
    using standard for loop to traversal each elements and  print it
    for(int i = 0 ; i < sizeof(grade_array)/sizeof(char); i++){
        std::cout << grade_array[i] << std::endl;
    }
    but there is another way of doint it
    that is foreach loop
    */
    //syntax of foreach loop
    // for (datatype new_variable : array_name){ //this will traversal from the arrays 1st element's to the last 
        //code using that new_variable
   
    //foreach loop
    for(char ch : grade_array){
        std::cout << ch << std::endl;
    }
/*
        A
        B
        C
        D
        E
        F
*/    return 0;
}