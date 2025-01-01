#include<iostream>

int main(){
    /*
    arithmetic operators = return the result of
    a specific arithmetic operation (+, -, *, /)
    */
    //int students = 20;
   
    /*
    if new student enters the class
    students = students + 1;//21
    students += 1;//22
    students++; //23
    std::cout << students; //23
    std::cout << '\n';
    std::cout << '\n';

    students = students - 1; //22
    students -= 1; //21
    students--;    //20
    std::cout << students; //20
    std::cout << '\n';
    std::cout << '\n';

    students = students/2;//10
    students /= 2; //5
    std::cout << students << '\n';
    std::cout << '\n';
    */


    //double part;
    //again divided by 2 will be 2.5 but as integer it will store 2 , the decimal part won't be stored 
    //part = students /= 2.0; //2 in students, and 2 in part, because students is integer, 
    
    //std::cout << students << '\n'; //2
    //std::cout << part << '\n';     //2


    //finding a number even or odd
    /*
    students = 20;
    int remainder = students % 2; if even it will be divided by 2 and remainder = 0
                                  if odd then reamainder = 1 ;
    std:: cout << remainder; //0
    */

   //*order of arithmetic operation, 
   // 1.parenthesis
   // 2.multiplication & 3.divison 
   // 4.additon & 5.subtraction
    int res = 6 - 5 + 4 * 3 / 2;
                    //4*3=12
            // 6 - 5 + 12 / 2;
            // 6 - 5 + 6;
            // 6 - 11;
            // -5
            //so, res = -5 will be stored;
             
   return 0;
}