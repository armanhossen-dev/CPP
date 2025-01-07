#include<iostream>

void swapValue(std::string n1, std::string n2);
void swapRef(std::string &n1, std::string &n2);

 void swapNumberByValue(int num1, int num2);
void swapNumberByReference(int &num1, int &num2);


int main(){
    std::string x = "Arman";
    std::string y = "Hossen";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    //let's see did it changed
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    /*
    x: Hossen
    y: Arman
    */
   std::cout << std::endl;
   //LETS USE FUNCTION TO SWAP 
   std::string a = "Ammu";
   std::string b = "baba";
    
    //pass by value
    swapValue(a,b); //this syntax, means i have pass the value, not their address
   //the values are like copies of the original, so if they swap that does'nt change the original

        
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b<< std::endl;
    //no change happen
    //todo::: if i want to change the original then i have to pass by reference
    //reference like a memory address
    //todo:: now if i pass those variables address then it can be done swapping
    swapRef(a,b); // function's parameter will have '&' not while sending ref in calling the function,,,,,,(std::string &n1, std::string &n2) variable e address,
    
    std::cout << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b<< std::endl;




    //*********************************************** */
    /*
    swap(a,b) - void swap(std::string a, std::string b);
    here we have pass the variable's value, we create copies

    swap(a,b) void swap(std::string &a, std::string &b);
    when we use the address of operator we're passing memory addresses
    to where the original a, b variables are located
    and then swapping the values, just to

    */

    //if passing the values or copies , using no address-of operator we will create copies
    //to check this,
    //we can print the swap(a,b) function void swap(std::string a, std::string b);
    //we will get differrent address then their prev
    //usign '&'  operator we can see their addres is asame after passing



    std::cout << std::endl;

    int num1 = 10, num2 = 20;
    std::cout << "original address :\n";
    std::cout << "num1 = " << &num1 << std::endl;
    std::cout << "num2 = " << &num2 << std::endl;
    std::cout << std::endl;


    swapNumberByReference(num1,num2); // void swapNumberByReference(int &num1, int &num2);
    std::cout << std::endl;


    swapNumberByValue(num1,num2); // void swapNumberByValue(int num1, int num2);
    std::cout << std::endl;


    /*
    original address :   
    num1 = 0x61fe60      
    num2 = 0x61fe5c      

    swapNumberByReference
    num1 = 0x61fe60      
    num2 = 0x61fe5c      

    swapNumberByValue
    num1 = 0x61fe40
    num2 = 0x61fe44
    */
    return 0;
}
void swapValue (std::string n1, std::string n2){
    std::string temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapRef(std::string &n1, std::string &n2){
    std::string temp = n1;
    n1 = n2;
    n2 = temp;
}

 void swapNumberByValue(int num1, int num2){
    std::cout << "swapNumberByValue\n";
    std::cout << "num1 = " << &num1 << std::endl;
    std::cout << "num2 = " << &num2 << std::endl;

 }

void swapNumberByReference(int &num1, int &num2){
    std::cout << "swapNumberByReference\n";
    std::cout << "num1 = " << &num1 << std::endl;
    std::cout << "num2 = " << &num2 << std::endl;

}
