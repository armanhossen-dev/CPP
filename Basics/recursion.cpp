#include<iostream>
using namespace std;


void walk(int steps);
int facto(int num);

int main(){

    // recursion = a programming technique where a function invokes itself 
    //             from within break a complex concept into a repeatable single step
    
    // (iteerative vs recursive)
    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms
    // disadvantages = uses more memory , slower

    //walk(50);
    int num = facto(5);
    cout << num << endl;


    return 0;
}
int facto(int num){
    //recursion way
    if(num == 1 || num == 0){
        return 1;
    }
    return num * facto(num-1);  
   
    /* normal way
    int result = 1;
    for(int i = 1; i<= num ; i++){
        result*=i;
    }
    return result;
    */
}


void walk(int steps){
    /*
    for(int i = 0; i<steps; i++){
        cout << i+1 << " you take a step!" << endl;
    }
    */

   //now using recursion
   if(steps > 0){
       cout << "you take a step!" << endl;
        walk(steps - 1);
    }
}