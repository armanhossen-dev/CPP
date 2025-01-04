#include<iostream>
int main(){
    /*
        break = break out of a loop or switch
        continue = skip current  iteration
    */

   for(int i = 1; i<= 10; i++){
    //i want to print only the even numbers
    /*
    if(i%2 == 0){
        std::cout<< i << std::endl;
    }
    */
    if(i%2 != 0){
        continue; //it skips the  odd numbers to print or go to the next statemnet,
    }
    std::cout<< i << std::endl;
   }

    std::cout << std::endl;
    //break statement to stop the loop or switch case
    int j = 1;
    while(j<=5){ // loop condition for repeating inside code for 5 times, 
        std::cout << j << ' ' <<"Alhamdulillah\n";
        if(j == 3){ 
            break;  //but i want to print this for 3 times
        }   
        j++;
    }

    

    return 0;
}