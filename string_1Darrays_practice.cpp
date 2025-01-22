#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    cout << "string arrray:\n";
    string names[] = {"Arman", "Hossen", "Ripon"};
    cout << names[0] << '\n'
         << names[1] << '\n'
         << names[2] << endl;
    names[0] = "Ibrahim";
    cout << '\n'
         << names[0] << endl; // names[0] value or data changes
    cout << "------------------------------------\n";
    
    cout << "char array:\n";
    char alf[] = {'A', 'R', 'M', 'A', 'N'};
    int size = sizeof(alf) / sizeof(char);
    for (int i = 0; i < size; i++)
    {
        cout << alf[i];
    }
    cout << endl;
    cout << "------------------------------------\n";
    
    cout << "int array:\n";
    int ids[] = {101, 202, 303, 404, 505, 606};
    int size__of_ids = sizeof(ids) / sizeof(int);
    for (int j = 1; j < size__of_ids; j++)
    {
        cout << ids[j] << '\n';
    }
    cout << "------------------------------------\n";

    cout<< "double array:" << endl;
    double price[3] = {20.01, 30.4, 39.003} ;
    for(int j = 0; j < 3 ; j++){
        cout << price[j] << endl; 
    }
        // dosomik er por je koi ghor ase oi koi tai print hobe,
        /*
        20.01
        30.4
        39.003
        */ 

       //limit the decimal 
       //#include <iomanip> // For std::fixed and std::setprecision
    double pri[3] = {20.01, 30.4, 39.003};
    for(int k = 0; k < 3; k++) {
        cout << fixed << setprecision(4) << pri[k] << endl;
    }
    return 0;




}