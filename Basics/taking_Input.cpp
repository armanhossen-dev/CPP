#include<iostream>

//cout << (insertion operator)
//cin >> (extraction operation)
//cin for character input 

int main(){
    std:: string name;
    std::cout<< "what's your First name " <<'\n';
    std::cin>> name; //it will take only a word, not sentance here m afte white space it will end taking inputs
    //once have a space , it stop reading it
    std::cout<< "Hello " << name << '\n';
    std::cout<< "what's your age?"<<std::endl;
    int age;
    std::cin>> age ;
    std::cout<<"bro born in "<< 2025-age << std::endl;

    //todo if we need to take input  of a sentance then we will use 
    //std::ws, here ws for white spaces, 
    //todo 'std::getline(std::cin >> std::ws, variableName);' // Reads the entire line, including spaces

    std::string fullName;
    std::cout << "what's your full name " << name << std::endl;
    std::getline(std::cin >> std::ws, fullName);
    std::cout<< "so your full name is " << fullName << std::endl;
     

    return 0;
}