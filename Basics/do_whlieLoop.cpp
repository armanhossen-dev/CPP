#include<iostream>

int main(){
    //do while loop = do some block of code first, 
    //                then repeat run again that prev code if the condition  is true

    int num;
    /*
    //because we did't assigned any value in the integer variable so it has garbage value or zero in it, so it skipped the while loop , so to run the while loop,initialy we have to put or assign any value in this variable
    //num = -1; it will work, but if i write the code which is inside the while loop , then it will work, then check the while condition ,if true then run's the while loop for positive input number, now 
            std::cout << "Enter a positive number : ";
            std::cin >> num;
    //but we can use do while loop for this --
    while(num < 0){
            std::cout << "Enter a positive number : ";
            std::cin >> num;
            //this loop will not end , unless the num is positive;
    }
    
    */
    /*
     zero is neither a positive number nor 
     a negative number. It is considered 
     neutral and serves as the boundary 
     between positive and negative numbers 
     on the number line.
    */
   
    
    do{
        std::cout << "Enter a positive number : ";
        std::cin >> num;
    }while(num < 0);

    std::cout << "Your enterd positive number is :  " << num;

     

    return 0;
}