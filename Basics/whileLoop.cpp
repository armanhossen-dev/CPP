#include<iostream>
int main(){

    std::string name;

    //if(name.empty()){ //if i use if statement then it will check the condition for 1 time and if there is no user input then , next there will be Assalamualikum , and nothing, so i used in the next line while
    while(name.empty()){    // by while(condition) this condition is true then it will run, if the user give the name as input then it will be (condition) false, then theis loop will be end
        std::cout<< "Enter your name : ";
        std::getline(std::cin , name);
    }
    //while loop is kind a if , which checks the conditon  and runs the statements unless the condtion gets false
    std::cout << "AssalamuAlaikum "<< name << std::endl;

    
    return 0;
}