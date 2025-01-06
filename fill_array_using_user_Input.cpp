#include<iostream>
int main(){
    std::string foods[4]; //limited size, so user can not give more info than 4 elements, and if user gives less than 4 elements then there will be wast of memory , so its satatic memory, not dinamicaly so we can't change the size after the code runs if we give like this size while declare, 
    std::string temp;
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i<size; i++){
        if(i == 0 ){
            std::cout << "You can enter "<< size << " food names\n";
        }
        std::cout << "Enter a food you like or 'q' to quit : ";
        //std::getline(std::cin , foods[i]);
        std::getline(std::cin , temp);
        if(temp == "q"){ //because temp or foods are string , so "q" not 'q'
                    break;
        }else{
            foods[i] = temp;
        }
    }
    
    //todo: foods[i].empty() it means foods[i] element is empty,
    //todo: !foods[i].empty() it means foods[i] element is not empty,

    for(int i = 0; !foods[i].empty(); i++ ){
        std::cout << foods[i] << std::endl;
    }

    return 0;
}