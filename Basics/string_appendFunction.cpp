#include<bits/stdc++.h>
using namespace std;
int main(){
    //? string append() function
    // after my string i can add more string with it by append() function 
    string userName;
    cout << "Enter username: ";
    cin >> userName;
    //making gmail
    userName.append("@gmail.com");
    cout << userName << endl;

    return 0;
}
