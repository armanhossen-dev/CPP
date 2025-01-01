#include<iostream>
#include<cmath>

int main(){
    char op;
    double num1;
    double num2;
    double result;
    
    //simple calculator using switch case in cpp
    std::cout << "***********Calculator*************\n";
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter number1: ";
    std::cin >> num1;
    
    std::cout << "Enter number2: ";
    std::cin >> num2;
    
    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result : "<< result << '\n';
            break;
        
        case '-':
            result = num1 - num2;
            std::cout << "result : "<< result << '\n';
            break;
        
        case '*':
            result = num1 * num2;
            std::cout << "result : "<< result << '\n';
            break;
        
        case '/':
            result = num1 / num2;
            std::cout << "result : "<< result << '\n';
            break;
        default:
            std::cout<<"that wasn't a valid operator\n";
        
    }
    std::cout << "**********************************\n";

    return 0;
}