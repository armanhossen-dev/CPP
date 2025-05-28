
#include<bits/stdc++.h>
using namespace std;
int main(){
    //? string empty() function 
    string noName;
    cout << "Enter empty name by pressing enter:";
    getline(cin , noName);
    if(noName.empty()){
        cout << "You didn't enter your name" << endl; // if user just press enter then 
    }else{
        cout << "Hello " << noName << endl;
    }
    return 0;    
} 