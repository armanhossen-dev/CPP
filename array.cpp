#include<iostream>
//#include<stdio.h>

using namespace std; // Allows using `std` members directly

int main(){
    //array = a data structure tha can hold multiple values 
    //       values are accessed by an index number
    //      'kind of like a variable that holds multiple values'
    //string car = "BMW";
    //cout << car << endl; //IT PRINTS THE STRING , BMW.
    
    //all elements should be same as the array data tyep is like for this ->strings, not other data types
    string carNames[] = {"BMW", "MUSTANG", "CORVETTE", "CAMRY"};
    //NOW IF I CODE TO PRINT CAR, THEN IT WILL  SHOW THE MEMORY ADDRESS OF THE FIRST ELEMENT OF THE ARRAY  , INDEX 0
    //cout << carNames; //0x61fe9c
    //to show the first car name, index = 0, index starts from zero.
    cout << carNames[0] << '\n'
         << carNames[1] << '\n'
         << carNames[2] << '\n'
         << carNames[3] << '\n';

    //CHANGE CAR NAME 
    carNames[0] = "TOYOTA";
    cout << '\n';
    cout << carNames[0] << '\n'
         << carNames[1] << '\n'
         << carNames[2] << '\n'
         << carNames[3] << '\n';

    cout << endl;
    //if i only declare a array, then i have to put a size in its , [] brakets, and later add that much elemnets in it
    int ID[3];
    ID[0] = 883;
    ID[1] = 884;
    ID[2] = 885;
    for(int i = 0; i < 3; i++){
        cout << "241 - 15 - " << ID[i] << endl;
    }


    cout << endl;
    double price[3] = {20.01, 30.4, 39.003} ;
    for(int j = 0; j < 3 ; j++){
        //printf("%.3lf\n", price[j]);
        cout << price[j] << endl;  //#include<stdio.h>
        /* // decimal point will have same number of digits they had prev
        / dosomik er por je koi ghor ase oi koi tai print hobe,
        20.01
        30.4
        39.003
        */ 
    }
    return 0;
}