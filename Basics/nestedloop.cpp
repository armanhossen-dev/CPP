#include<iostream>
int main(){

    for(int a = 1; a <= 5; a++){
        for(int b = 1 ; b <= 10; b++){
            std::cout << b << ' ';
        }
        std::cout<< std::endl;
    }
    /* output:
    1 2 3 4 5 6 7 8 9 10        
    1 2 3 4 5 6 7 8 9 10        
    1 2 3 4 5 6 7 8 9 10        
    1 2 3 4 5 6 7 8 9 10        
    1 2 3 4 5 6 7 8 9 10
    */
   std::cout<< '\n';
   int rows, columns;
   char symbol;
   //todo: switch case for what you want to make
   std::cout<< "Enter the number of rows: ";
   std::cin >> rows;
   std::cout<< "Enter the number of columns: ";
   std::cin >> columns;
   std::cout<< "Enter the symbols: ";
   std::cin >> symbol;

   //making a rectangle
   for(int r = 1; r <= rows; r++){
    for(int c = 1; c <= columns; c++){
        //std::cout << symbol;
        std::cout << symbol << ' ';
    }std::cout << '\n';
   }
    std::cout<< '\n';
    return 0;
}