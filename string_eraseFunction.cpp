#include<bits/stdc++.h>
using namespace std;
int main(){

    string user;
    //? we can erase a portion of a string
    //variable.erase(startingIndex, EndingIndex+1);
    user = "ARMAN";
    user.erase(2,user.length()); // or usre.erase(2,5); 
    cout << user << endl; //AR

    return 0;
}

