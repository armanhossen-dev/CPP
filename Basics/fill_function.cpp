#include<iostream>
int main(){
    //fill() = FILLs a range of elements with a specified value 
    //           fill(begin, end, value)
    //syntax//           fill(arrayName, arrayName + arraySize, value / "string" / 'char');

    //std::string fruits[10] = {"Apple", "Banana", "Orange", "Mango", "Pineapple", "Grapes", "Watermelon", "Strawberry", "Papaya", "Guava" };
    //now we will not writ the elemnents for the array, we will use fill function to generate the array elements

    int size = 30;
    std::string food[size];
    //fill (food, food + size, "pizza");
    //first 10 food will be pizza
    fill (food, food + size/3, "pizza");
    
    //second 10 food will be hunny
    fill(food + size / 3, food + (size / 3) * 2, "hunny");
    
    //last 10 food will be sweets
    fill (food + (size/3)*2, food + size, "sweets");


    int h,j;
    h = j = 1;
    //for(std::string f : fruits){
    for(std::string f : food){
        if(h == 6){
            std::cout << std::endl;
            h = 1;
        }
        if(j == 11){
            j = 1;
            std::cout << std::endl;
        }
        std::cout << j << ". ";
        std::cout << f << ' ' ;
        j++;
        h++;
    }               
    return 0;
}








