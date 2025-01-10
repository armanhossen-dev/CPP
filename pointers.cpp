#include<iostream>
int main(){
    //pinter  = it's is variable  that stores a memory address of another variable 
    //           somethimes it's easier to work an address
    //& address of operator 
    // * dereference operator / reference operator

    std::string name = "bro";
    std::string *p_name = &name;
    std::cout << "name = "<< name << '\n';
    std::cout << "p_name = "<< p_name; //0x61fef0, it's the memory address  for name variable,
    
    std::cout << std::endl; /// making newline between address and value, 
    
    //todo:   to access the value of this address we will use * operator, like this
    std::cout << "*p_name =" << *p_name << std::endl;
    std::cout << std::endl;

    int age = 21;
    int *p_age = &age;
    //p_age = has address of age variable;
    // *p_age = has the value of age variable;
    std::cout << "age = "
              << age
              << '\n'  
              << "p_age = "
              << p_age
              << '\n'
              << "*p_age = "
              << *p_age
              << '\n'
              << std::endl; 
    
            
    //for array,
    std::string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};
    //freePizzas = this array name it self it is a address,
    ////std::string *pointer_freePizzas = &freePizzas; 
    //if i write it for the pointer then i don't have to add any '&' sign before it
    //if i print the derefference or with the '*' of that freePizza address containing pointer, then i will have the arrays first element value
    std::string *p_freePizzas = freePizzas;
    std::cout << "freePizzas = "
              << freePizzas
              << '\n'
              << "p_freePizzas = " 
              << p_freePizzas
              << '\n'
              << "*p_freePizzas = "
              << *p_freePizzas
              << '\n';
    return 0;
}