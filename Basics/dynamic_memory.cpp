#include<iostream>

int main(){
    //dynamic memory = Memory that is allocated after the program
    //                 is already compiled & running.
    //                 use the 'new' operator to allocate
    //                 memory in the heap rather than the stack

    //                 useful when we don't know how much memory
    //                 we will need. Makes our programs more flexible,
    //                 especially when accepting user input.

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "Address : " << pNum << '\n';
    std::cout << "Value : " << *pNum << '\n';
    //Address : 0x7e6d60
    //Value : 21  
    delete pNum; // we deleting / freeing the pNum address value and data, when ever we use new operator we should delete to free that space we used
    std::cout << std::endl;

    char *pGrades = NULL;
    int size;
    std::cout << "How many Grades to enter in? : ";
    std::cin >> size;

    pGrades = new char[size];
    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i+1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i< size ; i++){
        std::cout << pGrades[i] << ' ';
    }

    /*
    How many Grades to enter in? : 5
    Enter grade #1: A
    Enter grade #2: B
    Enter grade #3: C
    Enter grade #4: D
    Enter grade #5: E
    A B C D E 
    */
    delete[] pGrades;
    return 0;
}