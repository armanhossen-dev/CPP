//c = sqrt(pow(a,2)+pow(b,2)) i think so
#include<iostream>
#include<cmath>

int main(){
    double a, b, c;
    std::cout <<"Enter side a = ";
    std::cin >> a;
    
    std::cout <<"Enter side b = ";
    std::cin >> b;
    
    //std::cout << "enterd value \na = " << a << '\n' << "b = " << b << '\n';
    
    //a = pow(a,2);
    //b = pow(b,2);
    //c = sqrt(a + b);
    c = sqrt( pow(a, 2) + pow(b,2));
    std::cout << "the other part c = ";
    std::cout << c << std::endl;
    //test case, a = 3, b = 4 , c = 5 

    return 0;
}