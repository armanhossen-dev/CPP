#include<iostream>
int main(){
    /*
    memory address =  a location in memory     
    where data is sored, 
    a memory address can accessed with '&' (address-of operator) or we call In coding, the ampersand (&) 
    */

    std::string name = "Arman Hossen Ripon";
    char section = 'a';
    int age = 22;
    int id = 883;
    bool cse = true;
    /*
    here, name, section, age, cse, thoes are variables, 
    and they stored some information or value given by us, 
    variable need to be exist in some where, in our computer's
    memory, and each variable has an address,
    */
   //lets see the address of those variales
   std::cout << "&name(default behavior) = "<< &name << '\n';
   std::cout << "&age (default behavior) = "<< &age << '\n';
   std::cout << "&id  (default behavior) = "<< &id << '\n';
   std::cout << "&cse (default behavior) = "<< &cse << '\n';
    //those are hexadecimal numbers
// but the char variable address doesn't seems to be hexadecimal number
   //std::cout << "&section = "<< &section << '\n';
   std::cout << "&section (default behavior) = " << &section << '\n'; // This may print 'A'
   std::cout << "&section (as void*) = " << static_cast<void*>(&section) << '\n'; // This prints the address
    /*
&name(default behavior) = 0x61fef4   6422260 ,,,,,,, '61fef4' -> hexa decimal to -> decimal = 6422260
&age (default behavior) = 0x61feec   6422252
&id  (default behavior) = 0x61fee8   6422248
&cse (default behavior) = 0x61fee7   6422247
&section (default behavior) = a`→♣☺↕
&section (as void*) = 0x61fef3       6422259 this are in bytes,last 2digit difference you can notice how much each take than oters

    */

   std::cout << "int         = " << sizeof(int) << "bytes\n";
   std::cout << "double      = " << sizeof(double) << "bytes\n";
   std::cout << "char        = " << sizeof(char) << "bytes\n";
   std::cout << "std::string = " << sizeof(std::string) << "bytes\n";
   std::cout << "bool        = " << sizeof(bool) << "bytes\n";



/*
int         = 4bytes
double      = 8bytes
char        = 1bytes
std::string = 24bytes
bool        = 1bytes
*/
    return 0;
}