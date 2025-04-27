#include<iostream>
#include<bits/stdc++.h>

/*
overloaded constructors =  multiple constructors with same name but different parameters
                           allows for varying arguments when instantiating an object      
*/


class pizza{
    public:
        std::string topping1;
        std::string topping2;
    //we can have multiple constractor with the same name and different paramemters so here how it is
    pizza(){}
    pizza(std::string topping1){
        this->topping1 = topping1;  //this topping1 is the prev public 'std::string topping1;', and the next one is in the object 'pizza(std::string topping1)'
    }
     pizza(std::string topping1,std::string topping2){
        this->topping1 = topping1;
        this->topping1 = topping2;
    }
};

int main(){
    pizza pizza1("pepperoni");
    pizza pizza2("mashrooms", "peppers");
    pizza pizza3; //has not input or arguments  for this we do this- 'pizza(){}' 
    
    return 0;
}


