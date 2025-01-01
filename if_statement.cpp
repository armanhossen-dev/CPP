#include<iostream>

int  main(){
    //if statements = do something if a condition is true
    // if not then don't do it;

    //if below 18 then he/she is Not  Mature, if more than that age then Mature
    int age;
    std::cout<< "Enter your age: ";
    std::cin >> age ;
    if(age < 0){
        std::cout<<"You haven't been born yet!" << '\n';
    }
    else if(age >= 18){
        std::cout<<"You are Mature!\n";
    }else{
        std::cout<<"Your are not Mature!\n" << std::endl;
    }
    //the first if or condition is true that will be executed then this condition chacking will end
    return 0;

}