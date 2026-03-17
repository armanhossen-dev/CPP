#include<iostream>
#include<cmath>
//returnType_Datatype functionName(){
    //statements things to do by code
    //return someThingLikeThe_returnType_value;
//}
double sq(double value);
//Length, width, height
double volume(double width, double height ,double Length);
double volumeOFcube(double Length);

using sr = std::string;
sr concatStrings(sr f1, sr f2);

int main(){
    double  area, Length, width, height ;
    //switch case for each task, 
    int task;
    std::cout << "1. Find Area of Square?\n";
    std::cout << "2. find volume of rectangular?\n";
    std::cout << "3. find volume of cube?\n";
    std::cout <<  "To skip this , press 4\n";

    std::cout<< "Select the task to do (1-4): ";
    std::cin >> task;
    switch(task){
        case 1:
            std::cout<< "Enter the length of the square: ";
            std::cin >> Length;
            area = sq(Length);
            std::cout<< "Area of the square: " << area << "cm^2." << std::endl;
            break;
        case 2:
            std::cout << "Enter the Length: ";
            std::cin >> Length;
            std::cout << "Enter the width: ";
            std::cin >> width;
            std::cout << "Enter the height: ";
            std::cin >> height;

            std::cout <<  "Volume of Rectangular Shape: " << volume(Length,width,height) << "cm^3\n";
            break;
        case 3:
            std::cout<< "Enter the one side length: ";
            std::cin >> Length;
            //double v =  volumeOFcube(Length);
            std::cout << "volume of Cube: " << volumeOFcube(Length) << "cm^3\n";
            break;
        case 4:
            break;
        default:
        std::cout<< "Invalid Input\n";
            break;
    }

    sr first_name;
    sr last_name;
    std::cout<<"Enter First name : ";
    std::cin >> first_name;
    std::cout <<"Enter Last name : ";
    std::cin >> last_name;
    //sr fullName = concatStrings(first_name, last_name);
    //std::cout << "Full name : " << fullName << '\n';
    std::cout << "Full name : " << concatStrings(first_name,last_name) << '\n';
    

    return 0;
}

double sq(double value){
    return pow(value, 2);
}
double volume(double width, double height, double Length){
        return width*height*Length;
}
double volumeOFcube(double Length){
    return pow(Length,3);
}
sr concatStrings(sr f1, sr f2){
    return f1 + ' ' + f2;
}