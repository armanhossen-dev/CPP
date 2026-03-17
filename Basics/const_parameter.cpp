#include<iostream>
using namespace std;



void  printInfo(const string name,const int age);

int main(){
    /*
    const parameter = parameter that is effectively read-only
                      code is more secure and conveys intent 
                      usefull for references and pointers
    */
   string name = "Arman";
   int age = 22;
   printInfo(name,age);
   return 0;
}

void  printInfo(const string name,const int age){
    //name = " "; thiw will not chagne the name
    //age = 0; // age will be unchanged, because while they yere receaved they were constant, now they are only read only, if i remove the comments then also it will not work
    //todo:: to secure the address or other we an use const before the data types
    cout << name << endl;
    cout << age << endl;
}
