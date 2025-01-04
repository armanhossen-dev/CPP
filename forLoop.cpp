#include<iostream>

int main(){

    //int i;
    //for(i = 1; i<= 5; i++){
    for(int i = 1; i<= 5; i++){
        std::cout << "Hello " << i << std::endl;
    }
    /*
    Hello 1
    Hello 2
    Hello 3
    Hello 4
    Hello 5
    */
   std::cout << std::endl;
   // 1 x 1 = 1 - 10
   for(int j = 1; j <= 10 ; j++){
        std::cout<< j << " x " << j << " = " << j*j << std::endl;
   }
   /*
    1 x 1 = 1
    2 x 2 = 4
    3 x 3 = 9
    4 x 4 = 16
    5 x 5 = 25
    6 x 6 = 36
    7 x 7 = 49
    8 x 8 = 64
    9 x 9 = 81
    10 x 10 = 100
   */

  /*
    std::cout << std::endl;
  for(int x = 10; x >= 1; x--){
    std::cout << x << std::endl;
  }
  
  */
 //! for loop for a limited time to repeat code
 

    return 0;
}