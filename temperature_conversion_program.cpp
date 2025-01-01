#include<iostream>
int main(){
    double temp;
    char unit;


    std::cout << "**************Temperature Conversion*****************\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cin  >> unit;

    switch(unit){
        case 'F':
        case 'f':
            std::cout<< "Enter the temperature in Celsius: ";
            std::cin >> temp;

            temp = (1.8 * temp) + 32.0;
            std::cout << "Temperature is : "<< temp << "F\n";
            break;

        case 'c':
        case 'C':
            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin  >> temp;

            temp = (temp - 32) / 1.8;
            std::cout << "Temperatuer is "<<temp << "C\n";
            break;

        default:
            std::cout << "Please enter in only C or F\n";
            break;            
    }

    std::cout << "*****************************************************\n";

    return 0;
}