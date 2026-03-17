#include <iostream>
#include <vector>
/*
typedef = reserved keyword used to create an
            additional  name (alias) for another data type
            New identifier for an existing type helps with
            readability and reduce types
*/
// its kind a nick name
// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// todo: we can use 'usign newDataType = old_real_data_type;'
//todo: insted of 'typedef'


//typedef std::string text_t;
//typedef int number_t;

using numType = int;
using sentence = std::string;


int main()
{
    // std::vector<std::pair<std::string, int>>  pairlist
    // pairlist_t pairlist;

    //text_t fistName = "Bro"; // here text_t will be a represent std::string -> data type
    //number_t age = 22;       // same number_t represents 'int'

    //std::cout << "fist Name " << fistName << '\n';
    //std::cout << age << '\n';

    numType n1 = 10;
    sentence name = "Arman Hossen";
    
    std::cout << n1 << '\n';
    std::cout << name << '\n';

    return 0;
}