#include<iostream>
using namespace std;


int main(){

    /*
    Null value = a special value that means something has no value,
    when a pointer is holding a null value, that pointer is not pointing at anything (null pointer)

    nullptr = keyword represents a null pointer literal

    nullptrs are helpful when determining if an address was successfully assigned to a pointer
    */
   //todo 'let's create a null pointer'
   int *pointer = nullptr; // i have created a integer pointer ,but i haven't assign any address, so i put nullptr in it, so it willnot point any other address
   int x = 123;

    //pointer = &x;
    // checking if the pointer has any address in it or not , or has the nullptr 
    if(pointer == nullptr){
        cout << "pointer == nullptr\n";
        cout << "Address was not assigned\n";
        cout << "*pointer = " << *pointer << endl; // this line does'nt works
    }else{
        cout << "pointer != nullptr\n";
        cout << "Address was assigned\n";
        cout << "*pointer = " << *pointer << endl;

    }
    /*
    nullptr ar helpful when determining if an address was successfully assigned to a pointer
    when using pointers, be careful that your code isn't dereferencing null or pointing to free memory this will cause undefined behavior
    */
    return 0;
}