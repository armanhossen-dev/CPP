//stringstream & string handling 

#include<iostream>
#include<vector>
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

    string numsWithComma = "22,33,300";
    cout << numsWithComma << endl;
    // here we have comma , char ','
    char  ch; // we will store comma here
    // to extract nums
    stringstream obj(numsWithComma);
    // we can see here is 2 comma   
    int a, b,c; // we  will store numbers in a,b,c
    obj >> a >> ch >> b >> ch>> c ;
    cout << "a = "<< a << "\nb = "<< b <<"\nc = "<< c << endl;


    cout << endl;cout << endl;
    ///lets do it with vector
    string sal = "103,30,39,200";
    //find how many comma
    int nComma = 0;
    for(char a : sal){
        if(a == ','){
            nComma++;
        }
    }
    vector<int> nums(nComma+1);
    cout << "before Math : "<< sal << endl;


    char ch1; // to store comma
    int h = 0;
    stringstream numv(sal);
    for(int i = 0; i<nComma+1; i++){
        numv >> nums[h] ;
        h++;
        if(i!= nComma){
            numv >> ch1;
        }
        else{
            continue;
        }
    }
    cout << "After math: \n";
    for(int n : nums){
        cout << n << endl;
    }
    
    cout << endl;
    cout << endl;


    //lets do it for single space separated numbers
    //! while space we don't have to count  spaces just follow tihs method

    string spNum = "101 222 3338 4544";
    cout <<"Given number stirng " <<spNum << endl;
    stringstream n(spNum);
    int numq;
    vector<int> numbers;
    cout << "Extracted Numbers : " << endl;
    while(n >> numq){
        numbers.push_back(numq);
        cout << numq << endl;
    }
    return 0;
}