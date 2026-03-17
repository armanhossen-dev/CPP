#include<iostream>

using namespace std; // Allows using `std` members directly
int main(){
    //sizeof()  = 
    //determines the size in bytes of a :
    // variable, data type, class, object etc;
    /*
    double gpa = 3.5;
    cout <<"Size of  gpa    = " << sizeof(gpa)  << "bytes" << endl;
    / Size of  gpa    = 8bytes
    */
    cout <<"Size of :\n"
         <<"int    = " << sizeof(int)  << "bytes\n"
         <<"double = " << sizeof(double)  << "bytes\n"
         <<"char   = " << sizeof(char)  << "bytes\n"
         <<"string = " << sizeof(string)  << "bytes\n"
         <<"bool   = " << sizeof(bool)  << "bytes\n";
         //<<"const   = " << sizeof(const)  << "bytes\n" //explicit type is missing ( ' int' assumed) const = 4byte
    
//!========================================================!
/*  
        int    = 4bytes
        double = 8bytes
        char   = 1bytes
        string = 24bytes
        bool   = 1bytes
        const = int = 4bytes
*/
    //**********summary*********** */
    //datatype has specific size 
    // each elements of that data type has the same size like the data type,
    // if there is any array, then the size of that array will be multiply with 'the number how many element it has' with 
    // the array's data type size.
    //Example, sizeof(string) = 24byte, array_of_string[3] = 3 * 24 byte, 
//!========================================================!




//creating some newlines 
cout << endl; 
cout << endl;

//todo: to find how many elemnet in a  array, we can devide the array by its sizeof(data_type) to find the number of elements in it
//finding how many elements in array,
    string names[] = {"Arman", "Hossen", "Ripon"};
    int num_of_elements;
    num_of_elements = sizeof(names) / sizeof(string);
    cout <<"Number of elements in 'names' array = " << num_of_elements <<endl;
    cout << "The elements of 'names'\n";
    for(int i = 0; i< num_of_elements ; i++ ){
        cout << names[i] << endl;
    }



/*
    cout << endl;
    string name = "Arman Hossen";
     cout << "sizeof name = " << sizeof(name) << "bytes\n";
     cout << "sizeof 'Arman Hossen' = " << sizeof("Arman Hossen") << "bytes\n";
     cout << "string = size of string = " << sizeof(string) << "bytes\n";
    /for each string variable and string it self has 24bytes of space in memory 

    /cout << endl;
    cout << endl;
    string favteachersName[3] = {"Roni Sir", "Elora Mam", "Sharin Mam"},
            AynaGhorBoys[11] = {"Arman", "Anik", "Ratol", "Ajmain", "Azmain", "Ahsan", "Pappu", "Kazi", "Shihab", "Rahul", "Nayem"};
    /finding the sizof 
    cout << "size of favteachersName =" << sizeof(favteachersName) << "byte\n";
    cout << "size of string = string data type = "<< sizeof(string) << "byte\n";
    cout << "size of favteachersName[2] = per array element size = " << sizeof(favteachersName[2]) << "byte\n";
    cout << "size of AynaGhorBoys[2] = per array element size = " << sizeof(AynaGhorBoys[2]) << "byte\n";

    cout << endl;
    char sectionSemester[2] = {'O','K'};
    cout << "char = size of  char data type = "<< sizeof(char) << "byte\n";
    cout << "size of sectionSemester \n= cahr array size \n= total number of char array elements * char size (1 byte) = "<< sizeof(sectionSemester) << "byte\n\n";
    cout << "size of sectionSemester[0] = per char array element = "<< sizeof(sectionSemester[0]) << "byte\n";
*/



    //bool variable also takes 1 byte space
    /*
    cout << endl;
    cout << "bool = " << sizeof(bool) << "bytes\n" <<endl;

    bool kahini = true;
    cout << "kahini = true; sizeof(kahini) = " << sizeof(kahini) << "bytes\n";
    
    bool info = false;
    cout << "info = false; sizeof(nfo) = " << sizeof(info) << "bytes\n";
    */

    return 0;
}