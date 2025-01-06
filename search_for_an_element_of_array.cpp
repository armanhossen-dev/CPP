//*Search an array for an element
#include<iostream>

void printElements(int id[], int size);
int findElement(int id[],int size);

int findFood(std::string favFood[], int sizeString);



int main(){
    int id[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(id)/ sizeof(id[0]);
    /*
    int index = findElement(id, size);
    /printElements(id,size);
    if(index != -1){
        std::cout << "Number found\n";
        std::cout << "Number's index in array = "<< index << std::endl;
    /std::cout << "Position of this element in the aray = " << i+1 <<  std::endl;
    }else{
        std::cout << "Number not found\n";
    }    
    */

    std::string favFood[] = {"kalo misty", "kacchi", "pizza"};
    int sizeString = sizeof(favFood)/ sizeof(favFood[0]);
    int foodIndex = findFood(favFood, sizeString);
    if(foodIndex != -1){
        std::cout << "Food found\n";
        std::cout << "Food's index in array = "<< foodIndex << std::endl;
        //std::cout << "Position of this element in the aray = " << i+1 <<  std::endl;
    }else{
        std::cout << "Food not found\n";
    }

    return 0;
}


int findElement(int id[],int size){
    int num;
    std::cout << "Enter the number you want to find: ";
    std::cin >> num;
    for(int i = 0; i<size; i++){
        if(id[i] == num){
            return i;     //returning the array index for the element we search for       
        }
    }
    return -1; // not found
} 



void printElements(int id[], int size){
    std::cout<< "Elements\n";
    for(int i = 0 ; i<size; i++){
        std::cout << id[i] <<std::endl;
    }
}



//search in array, a string searching
int findFood(std::string favFood[], int sizeString){
    std::cout << "Enter Food name to search for : ";
    std::string f_name;
    std::getline(std::cin , f_name);
    for(int i = 0 ; i < sizeString; i++){
        if(favFood[i] == f_name){
            return i;
        }
    }
    return -1;
}