#include<iostream>
#include<ctime>
//a function to print happy birthday
//declare the function
//void hbd();
using sr = std::string; //now 'sr' means like datatype of "std::string"
//sr name = "Arman";
sr user_name;
int yearBorn;
void happyBirthday( sr name);
void agewish(int yearBorn);

int presentYear(){
    time_t timeInSceond = time(0);
    //time(0) gets the current time in seconds since the epoch.
    /*
    time_t is a data type used to 
    represent calendar time (usually the number 
    of seconds since January 1, 1970, 00:00:00 UTC, 
    also known as the Unix epoch).
    */
    tm *ltm = localtime(&timeInSceond);
    /*
    localtime() is a function from the <ctime> library in C++.
    It converts a time_t value (representing the number of seconds since the Unix epoch) into a tm structure.
    The tm structure contains components of time (year, month, day, hour, minute, second) adjusted to the local time zone.
    */
    /*
    tm *ltm is a pointer to the tm structure returned 
    by localtime().It allows you to access the individual 
    components of the local time, such as tm_year, tm_mon,
    tm_mday, etc.
    */
   /*
    struct tm {
        int tm_sec;   // seconds (0 - 60)
        int tm_min;   // minutes (0 - 59)
        int tm_hour;  // hours (0 - 23)
        int tm_mday;  // day of the month (1 - 31)
        int tm_mon;   // months since January (0 - 11)
        int tm_year;  // years since 1900
        int tm_wday;  // days since Sunday (0 - 6)
        int tm_yday;  // days since January 1 (0 - 365)
        int tm_isdst; // daylight saving time flag
    };
    */

    //extracting the time and return the year
    return 1900 + ltm -> tm_year;
}

int main(){
    //function = a block of reusable code 
    //  hbd(); //this prints 
    //std::cout<< "Enter your name: ";
    //std::cin >> user_name; //for a word name
    std::cout<< "Enter Your Full Name: ";
    std::getline(std::cin , user_name);
    //happyBirthday(user_name);
    std::cout<< "Enter Birth Year: ";
    std::cin >> yearBorn;
    agewish(yearBorn);

    
    return 0;
}
//define the function 
/*  
void hbd(){
    std::cout<< "Happy Birthday To You\n";
}
*/

void happyBirthday(sr name){
    std::cout << "Happy Birthday " << name << std::endl;
}

void agewish(int birth){
    happyBirthday(user_name);
    int age = presentYear() - birth;
    std::cout<<"Your are " <<age << " years old\n";
}