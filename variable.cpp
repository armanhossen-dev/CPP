#include<iostream>
int main(){
    int x; // integer declareation
    x = 10; //assignment
    int y = 56;
    std::cout<< x << '\n';
    std::cout<<"y = " << y << std::endl;
    
    int sum = x+y;
    std::cout<< "sum = "<< sum << std::endl;
    std::cout << '\n';
    std::cout << '\n';

    //integer 
    std::cout<< "integer examples"<<'\n';
    int bornYear = 2003;
    int presentYear = 2025;
    int presentAge = presentYear-bornYear;
    std::cout<< "My age in "<< presentYear<< " is "<< presentAge <<'\n';
    std::cout << '\n';
    std::cout << '\n';
    
    //not using float, using double
    //double for number including decimal
    std::cout<< "double examples"<<'\n';
    double price = 10.45;
    double gpa = 3.4;
    double temperature = 27.4;
    std::cout <<"price "<< price << std::endl;
    std::cout <<"gpa "<< gpa << std::endl;
    std::cout <<"temperature "<< temperature << std::endl;
    std::cout << '\n';
    std::cout << '\n';
    
    std::cout<< "character examples"<<'\n';
    //single character
    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';
    std::cout << initial << std::endl;
    std::cout<< "the dollar sign is like this "<< dollarSign << std::endl;

    //boolean (true = 1, false = 0)
    bool power = true;
    bool forsale = false;
    std::cout << '\n';
    std::cout << '\n';
    //string (0bjects that represents a sequence of text)
    //to declare a  string
    std::string  birthdayboi = "Arman";
    std::cout << birthdayboi;
    std::string day = "Wednesday";
    std::string favouritDesart = "kalojam";
    std::string address = "Earth";
    std::string dateofbirth = "01-01-2003";
    //presentAge
    std::cout << "Boi my name is "<< birthdayboi << "."<< std::endl;
    std::cout<< "today is " << day << "."<< std::endl;
    std::cout << "i love to eat " << favouritDesart << "."<< std::endl;
    std::cout<< "my present address is " << address << "." <<std::endl;
    std::cout << "my date of birth is " << dateofbirth <<"." << std::endl;
    std::cout << "my present age is " << presentAge << "." << std::endl;

    std::cout << '\n';
    std::cout << '\n';
    //The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    //(read-only)
    const  double PI = 3.14159;

    double radius = 10;
    double circumference = 2 * PI * radius;

    const int lightSpeed = 299792458;
    const int width = 1920;
    const int height = 1080;

    std::cout<< circumference << "cm" << '\n';
  
    return 0;
}