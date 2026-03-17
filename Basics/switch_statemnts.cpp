#include<iostream>
int main(){
    /*switch = alternative to using many "else if" statemnts
                to compare one value against matching cases
    */
   
   
   
   
   int month;
   std::cout << "Enter the month (1 - 12) : ";
   std::cin>> month;

    //using switch casessssssssssssss
    switch(month){
    case 1:
        std::cout << "It's January\n";
        break;

    case 2:
        std::cout<< "its February\n";
        break;

    case 3:
        std::cout<< "it's March\n";
        break;

    case 4:
        std::cout<< "it's April\n";
        break;

    case 5:
        std::cout<< "it's May\n";
        break;

    case 6:
        std::cout<< "it's June\n";
        break;

    case 7:
        std::cout<< "it's July\n";
        break;

    case 8:
        std::cout<< "it's August\n";
        break;

    case 9:
        std::cout<< "it's September\n";
        break;

    case 10:
        std::cout<< "it's October\n";
        break;

    case 11:
        std::cout<< "it's November\n";
        break;

    case 12:
        std::cout<< "it's December\n";
        break;

    default: //like the else statement
        std::cout<<"Invalid Input, bro,\n";
        break;   
    }



   //using if, else if, else
   /*
   if(month == 1){
    std::cout << "It's January\n";
   }else if(month == 2){
    std::cout<< "its February\n";
   }else if(month == 3){   
    std::cout<< "it's March\n";
   }else if(month == 4){   
    std::cout<< "it's April\n";
   }else if(month == 5){   
    std::cout<< "it's May\n";
   }else if(month == 6){   
    std::cout<< "it's June\n";
   }else if(month == 7){   
    std::cout<< "it's July\n";
   }else if(month == 8){   
    std::cout<< "it's August\n";
   }else if(month == 9){   
    std::cout<< "it's September\n";
   }else if(month == 10){   
    std::cout<< "it's October\n";
   }else if(month == 11){   
    std::cout<< "it's November\n";
   }else if(month == 12){   
    std::cout<< "it's December\n";
   }else{
    std::cout<<"Invalid Input, bro\n";
   }
   */

   //use character in switch case
   char grade; // A, B, C, D, F
   std::cout<< "Enter your letter grade (A-F) : ";
   std::cin>> grade;

   switch(grade){
    case 'A':
        std::cout<< "You did Great\n";
        break;
    
    case 'B':
        std::cout<< "You did well.\n";
        break;
    
    case 'C':
        std::cout<< "You are okay.\n";
        break;
    
    case 'D':
        std::cout<< "You didn't do well.\n";
        break;
    
    case 'F':
        std::cout<< "Congratulations, you failed.\n";
        break;
    default:
        std::cout<< "Invalid input\nPlease only enter in a letter grade (A-F)";
        break;
   }


    return 0;
}