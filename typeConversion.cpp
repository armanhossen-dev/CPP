#include<iostream>
int main(){
    
    /*
    typ conversion
    -> conversion a value of one data type to another
        Implicit = automatic
        Explicit = Precode value with data type (int)
    */

   int x = 3.14;
   // x = 3
   double y = 3.14;
   std::cout << "x = " << x << '\n';
   std::cout << "y = " << y << '\n';

   double z = (int)4.55;
   // z = 4
   std::cout << "z = " << z << '\n';

   char ch = 100;
   //ch = 'd' as 100 number converts into d as ASCII value of d = 100
   
   std::cout << ch << '\n';
   std::cout<< (char)101<< '\n'; //Explicit

   std::cout << '\n';
   //std::cout << '\n';

   int correct = 8;
   int question = 10;
   double score = correct/(double)question *100; //Explicit , changing  the questoin integer type to  double type variable 
   
   std::cout << score << "%" << '\n';












    return 0;
}