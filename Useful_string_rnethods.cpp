#include<iostream>
int main(){
    /*
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin , name); //this for taking full line with white spaces
    std::getline(std::cin >> std::ws, name);
    std::cout<< "your full name is "<< name << '\n';
    
    ? int nameCharNumber = name.length();
    std::cout<< "bro's name has '" << nameCharNumber<< "' character.\n";

    */
    /*
    if(name.length() > 20){
        std::cout<< "Name can't be 'more than' / 'over ' 20 character\n";
    }else{
        std::cout << "Welcome " << name << std::endl;
    }
    */

    //todo: "stringVariable.empty()" this return's a boolian value, 1 - true, 0 - false, ;
    /*
    bool x = name.empty();
    if(x){ //name is not empty, 
        std::cout << "you didn't enterd your name\n";
    }else{
        std::cout << "Hello "<< name << '\n';
    }

    name.clear(); // this clear(); function clears the name variable's string;
    std::cout<< "bro Have no name" <<name<<'\n';/// nothing will print in screen for name

    to append or add after the name we can use 'variable.append("string i want to append after the previous string\n");
    name.append("I am a student of Daffodil International University.\n");
    std::cout<<name;
    */

/*
    std::string username;
    std::cout<< "Enter username for email : ";
    std::cin>> username;
    std::cout << username<< std::endl;

    ? username.append("@gmail.com");
    std::cout<< "your email will be "<< username << std::endl;
*/

    //std::string user;
    //std::cout<< "Enter username : ";
    //std::cin >> user;  //i.am.ahrn

    //?  user.insert(0, "@");
    //stringVariable.insert(indexPosition, "string or character");
    //indexPosition starts from zero to  ---
    //user.insert(4, "bro");
    //remember before index 4the prev remains same, and after printing the bro then the form index 5 it will be there
    //and the index should be less or  equal to the length of the string
    //std::cout << user << std::endl ;  //@i.am.ahrn
/*
    std::string newname;

    std::cout << "enter a name : ";
    std::cin >> newname; //arman

    std::cout << newname.at(0); //a  //  newname.at(0)  - newname's string's at zero index character will be returned;
    std::cout << newname.at(1); //r
    std::cout << newname.at(2); //m
    std::cout << newname.at(3);  //a
    std::cout << std::endl;
    /note: arma will be printed, side by side, because there is not newline applied

    std::cout << newname.at(0) << std::endl; 
    std::cout << newname.at(1) << std::endl; 
    std::cout << newname.at(2) << std::endl; 
    std::cout << newname.at(3) << std::endl; 
*/

    //to find any character or string 
/*
    std::string info;
    std::cout << "Enter your info : ";
    std::getline(std::cin, info);

    std::cout << info.find(' '); // info.find(' '); -> it will return the positon of index where it find the "first"-> ' ' white space is in integer, and printing it
*/

    //to delete or erase any strings some portions
    //variable.erase(starting_index, howManyChar);
    std::string userA;
    std::cout << "Enter a word : ";
    std::cin >> userA;

    int a, b;
    std::cout << "Enter the index to start erasing : ";
    std::cin >> a;
    std::cout << "Enter how many char to erase : ";
    std::cin >> b;

    userA.erase(a, b);
    std::cout << "Final Output is : "<<userA << std::endl;
    //to learn more , visit: https://cplusplus.com/
    



    return 0;
}