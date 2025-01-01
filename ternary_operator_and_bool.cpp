//ternary operator ?: replacement to an if/else statement
//condition ? expression1 : expression2;
//conditino ? if_true_then_this_happen : if_false_then_this_happen;
 #include<iostream>
    int main(){
        
    int final_marks = 75;
    if(final_marks>= 60){
    std::cout<< "you pass\n"     ;
    }else{
        std::cout<<"you fail\n";
    }

    (final_marks > 70) ? std::cout << "Yow have more than 70 marks"<< std::endl  :  std::cout << "Yow have more than 70 marks" << std::endl; 

    int num = 9;
    //num % 2  == 1 ? std::cout<< "odd\n" :  std::cout<< "even\n";
    // condition , number 1 represents true, number zero  means false
    //now we can also write without " == 1 "
    //conditno ? true : false ;
    num % 2 ? std::cout<< "odd\n" :  std::cout<< "even\n";
    
    
    bool hungry = true;
    //hungry == true ? std::cout<< "Eat Food" : std::cout << "Code";
    hungry  ? std::cout<< "Eat Food\n" : std::cout << "Code\n";

    //also
    std::cout << (hungry ? "Take the food bro\n" : "you have to code\n");

    return 0;
 }