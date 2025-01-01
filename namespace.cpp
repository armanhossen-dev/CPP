#include<iostream>
    /*

    Namespace = provide a solution for preventing 
    name conflicts in large projects. Each entry needs a 
    unique name. A namespace allows for identically named entities
    as long as the namespaces are different
    */
namespace first_version{
    int x = 1;
}
namespace second_version{
    int x = 2;
}

namespace forY{
    int y = 20;
}

int main(){
    int x = 0;
    std::cout << x << '\n'; // it will print the value of x of local declaration (inside the value assignment in main fucntion)
    std::cout << first_version::x << '\n'; // value of x inside the namespace first verstion
    std::cout << second_version::x << '\n';

    using namespace forY; //if we use using namespace version; then we don't have to add version while printing that variable, 
    std::cout << y << '\n';

  return 0;
}

//wow fact
/*
? if we use "using namespace std;" afte the 'int main(){' line ,
* then we dont have to write 'std::'
then the  code will lock like

#include<iostream>

int main(){
    using namespace std;
    string name = "Bro";
    cout << "hello World!" << '\n';

    return 0;    
}

*/