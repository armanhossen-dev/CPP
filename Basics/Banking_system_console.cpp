#include<iostream>
#include <iomanip> // Required for std::setprecision and std::fixed
//setprecision = Nirbhulatā
double showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice = 0;
    do{
        std::cout <<"***************\n";
        std::cout <<"Enter your choice:\n";
        std::cout <<"1. Show Balance\n";
        std::cout <<"2. Deposit Money\n";
        std::cout <<"3. Withdraw Money\n";
        std::cout <<"4. Exit\n";
        std::cin >> choice;
        //todo: if i enter any char or some char then the output will run a infinite loop , so to fix it
        std::cin.clear();
        fflush(stdin);
         // this will fix if there is any input problem, if i input some thing different than expected, then
         // so if i enter any char,now it will be not taken, like this
         /*
            ***************   
            Enter your choice:
            1. Show Balance   
            2. Deposit Money  
            3. Withdraw Money 
            4. Exit
            arman
            Invalid choice    
            ***************   
            Enter your choice:
            1. Show Balance   
            2. Deposit Money  
            3. Withdraw Money 
            4. Exit

            i have input "arman" this was not expected , it could make problem without
            std::cin.clear(); //
            fflush(stdin);  //this will clear the input buffer
            this 2 line of code

            std::cin.clear();
            This clears the error state of the std::cin stream. 
            If the input operation fails (e.g., invalid input 
            for a specific type), the stream enters an error 
            state, and further input operations are blocked 
            until the error state is cleared. std::cin.clear() resets 
            the error flags, allowing further input operations.

            fflush(stdin);
            This clears the input buffer (stdin). 
         */

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance = balance +  deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout <<"Thanks for visiting!\n";
                break;
            default: std::cout << "Invalid choice\n";
                break;    
        }
    }while(choice != 4);
    return 0;
}

double showBalance(double balance){
        //std::cout<< "Your balance is: $" << balance << '\n';
        std::cout<< "Your balance is: $" << std::setprecision(2) <<std::fixed  << balance << '\n';
    /*
    ? std::setprecision(2): Sets the precision of floating-point numbers to 2 decimal places (for output).
    ? std::fixed: Ensures the numbers are displayed in fixed-point notation (not scientific).

        / Set precision to 2 decimal places
        std::cout << std::setprecision(2);

        / Use fixed-point notation
        std::cout << std::fixed;

        / Output the value with the above settings
        std::cout << "Value: " << value << std::endl;
    */
    return 0; 
}

double deposit(){
    double amount = 0;
    do{
        std::cout << "Enter amount to deposit: ";
        std::cin >> amount;
        if(amount>=0){
            return amount;
        }else{
            std::cout << "That's not a valid amount\n";
        }            
    }while (amount<0);        
}

double withdraw(double balance){
    double withdraw_amount;
    //before withdraw , i should check if the balance is more than zero
    if(balance == 0){
        std::cout << "You don't have balance\n";
        return 0;
    }else{
        std::cout << "Enter amount to be withdraw: ";
        std::cin >> withdraw_amount;

        if(withdraw_amount < 0){ //negative amout , return 0
            std::cout << "That's not a valid amount\n";
            return 0;
        }
        else if(balance >= withdraw_amount){
            return withdraw_amount;
        }
        else{
            std::cout << "Insufficient funds\n";
            return 0;
        }
    }
}