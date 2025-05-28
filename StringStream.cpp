//stringstream & string handling 

#include<iostream>
#include<string.h> 
#include<sstream>
using namespace std;

int main(){
    string str1 = "101"; // now this 101 is a string
    int num = 10;
    //! cout << str1 + num << endl; // this line will be an error
    // we cannot concat string with number
    //string to integer convert : by stoi(string_variable_name) 
    cout << stoi(str1) + num  << endl;  ///111
 

    // if the string has number with spaces then 
    string str2 = "1 20"; // we have space between 1 and 20 in this string
    // we use 'stringstream' to separate them , also i have to  use 'include<sstream>'
    // we know that here is two number so to store them 
    int num1, num2;
    // stringstream variableName(targetStringVariableNAME); // if there is two number then ...
    // variableName >> num1 >> num2;
    stringstream ss(str2); 
    ss >> num1 >> num2;
    cout << num1 << "\n" << num2 << endl;
    /*
    1
    20
    */
    return 0;
}