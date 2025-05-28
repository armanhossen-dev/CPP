#include<bits/stdc++.h>
using namespace std;
int main(){
    //? string length() function
    string name;
    cout << "Enter your name: ";
    //cin >> name; // this will take only a word
    // to take a line input
    getline(cin, name);
    cout << name << endl; 
    // Enter your name: Arman Hossen Ripon
    // Arman Hossen Ripon


    // to find the char number in a string we use .lenght() function  after its variable name 
    if(name.length() > 12){
        cout << "your name length is more than 12 char" <<
        '\n' << "your name lenght is : " << name.length() << endl;
    }else{
        cout << "Your name lenght is less than 12 char" <<
        '\n' << "your name lenght is : " << name.length() << endl;
    }
    return 0;

}