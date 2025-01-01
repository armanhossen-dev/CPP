#include<iostream>

int main(){

    std::cout << "Hello World" << '\n';
    //? 'std::cout' -> means standard character output
    //? '<< std::endl;' here "endl" means end of line 
    std::cout << "i love ma!" << std::endl;
    std::cout << "i love ma!" << std::endl;
    std::cout << "i love ma!" << std::endl;
    //std::cout << "i also love baba!";
    std::cout << "i love baba!" << std::endl;
    std::cout << "this is a sample line! " << '\n';
    std::cout << "this is also a sample line! " << '\n';
    //<< '\n'; can make new line but, using << std::endl; will make sure that line ended, it will remove/ flash the output  buffer
    //this is a comment
    /*
    this 
    is 
    a
    multi-line 
    comment
    */
    return 0;
}