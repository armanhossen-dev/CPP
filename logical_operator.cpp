#include<iostream>
int main(){
    //&& - check if two or more conditions are true, and operator
    // || -> check if least one of two conditions is true, or operator
    // !  -> reverses the logic state of its operand, not, 

    int temp;
    std::cout << "Enter the temperature: ";
    std::cin  >> temp;

    if(temp > 0 && temp <= 30){
        std::cout << "Temperature is good\n";
    }
    else if(temp <= 0 || temp >= 30){
        std::cout << "Temperature is bad\n";
    }
    else{
        std::cout << "Invalid input\n";
    }

    bool sunnyDay = true;
    if(!sunnyDay){ // means if not sunny day
        std::cout << "Not sunny day\n";
    }else{
        std::cout << "Sunny day\n"; //because sunnyDay = ture , so it will be output
    }

    bool arman_is_coder = true;
    //if(arman_is_coder == ture)
    if(arman_is_coder){
        std::cout<< "Thanks for practicing bro, it's 5:22 AM now, go to sleep\n";
    }



    return 0;
}