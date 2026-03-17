#include<iostream>

int  NUMBER; //this is the global variable
void printNum(); 


int main(){
    // local variables = declared inside a function or block {}
    // global variables = declared outside of all functions
     int num = 10;
     // num is a local variable for main funciton,
     // num can not be used in other funcitons without it declared in that function

     NUMBER = 10; //NUMBER variable is declared as global variable so it can be used any where, in main or other functions
     printNum();
    return 0;
}

void printNum(){
    //std::cout<< num << '\n'; //this will not work, because,
                            // num is not declared in void printNum() function
    std::cout<< NUMBER << '\n';
    //NUMBER variable is declared as global variable so it can be used any where, in main or other functions
}


//function's can not see in other functions, so we should use local variable ,
// we can use same name of variable for local variable , but we have to declare them which type and then use it, in the functoin


