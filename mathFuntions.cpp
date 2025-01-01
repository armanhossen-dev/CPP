#include<iostream>
#include<cmath>
/*
cmath for 
pow - power a number, syntax z = pow(base, power);
max for finding big among 2, syntax z = std::max(x,y);
min for finding small among 2, syntax z = std::min(x,y);
sqrt - square root of a number, syntax z  = sqrt(9);
abs - for absolute value, always positive number , syntax z = abs(-50);
round - round(3.4) will be output "3"  it goes to the small number if the decimal part isn't greater or same as 5, like .5 or more
        if round(3.5) it will return 4
        and round(3.6) it will return 4
        if decimal part is less then .5 then to the small or the integer part willl be the return , if decimal part is big ro same as .5 then the nearest big integer value it will be
ceil for the number to turn always the top or next integer if it has integer ,if the decimal part is not ther then it will not change the integer , the integer part will be the return        

for more go check here, 
https://cplusplus.com/reference/cmath/
*/

int main(){
    double x = 3, x_semi_down = 3.4;
    double y = 4;
    double z1_max, z2_min, z3_power, z4_sqrt,z5_absolute,z6_round,z7_ceil, z8_floor;

    z1_max = std::max(x,y);
    z2_min = std::min(x,y);
    z3_power = pow(2, 4); // 2 will have power 4 ,= 2*2*2*2 = 16
    z4_sqrt = sqrt(9); //3
    z5_absolute = abs(-50); //50 
    z6_round = round(x_semi_down);//x_semi_down = 3.4 will be 3
    z7_ceil = ceil(x_semi_down); //4
    z8_floor = floor(3.99); // 3
    
    std::cout<< "z1_max = "<<  z1_max  << std::endl;
    std::cout<< "z2_min = "<<  z2_min  << std::endl;
    std::cout<< "z3_power = "<<  z3_power  << std::endl;
    std::cout<< "z4_sqrt = "<<  z4_sqrt    << std::endl;
    std::cout<< "z5_absolute = "<<  z5_absolute    << std::endl;
    std::cout<< "z6_round = "<<  z6_round  << std::endl;
    std::cout<< "z7_ceil = "<<  z7_ceil    << std::endl;
    std::cout<< "z8_floor = "<<  z8_floor  << std::endl;
    
    return 0;
}