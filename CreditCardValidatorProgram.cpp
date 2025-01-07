#include<iostream>
/*
Luhn Algorithm
--------------
1. Double every second digit from right to left
    if doubled number is 2 digits, spit them
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. Sum results from steps 2 & 3
5. If step 4 is divisible by 10, #(number) is valid

601100990139424 
       6011           0009      9013           9424
      -----------  --------  ----------    ----<-- -- 
       6     1    |  0  0    |  9    |1  |     9     2
      6*2 | 1*2  | 0*2  0*2 |  9*2  |1*2|   9*2    2*2 
step1. 1  2  |  2   |  0    0  |1   8  |2  | 1    8     4
step2.sum of step1 digits =  29
step3.    0    1         0     9     0    3    4    4
step4. sum of setp 3 digits = 21
step5. 50% 10 = valid
*/




int getDigit(const int number); 
int sumOddDigits(const std::string cardNum);
int sumEvenDigits(const std::string cardNum);

int main(){
    //given Credit card number will be a string
    std::string cardNum;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin>> cardNum;
    result = sumEvenDigits(cardNum) + sumOddDigits(cardNum);

    if(result % 10 == 0){
       std::cout << cardNum << " is valid\n";
    }else{
       std::cout << cardNum << " is  Not valid\n";
    }
    return 0;
}

//test
/*
Enter a credit card number: 6011000990139424
6011000990139424 is valid  


Enter a credit card number: 6011000990139425
6011000990139425 is  Not valid
*/



int getDigit(const int number){ //if thenubmer is double digit then this function will return their sum , sum of those two digits
    return number % 10 + (number / 10 % 10);
}
    //number % 10 => 56 % 10 = 6, then,
    // (number / 10 % 10) -> number/10 , here both are int, example like, 56 / 10 = 5, then 5 % 10 = 5,
    //so the return will be like if the number is 56, then the return will be 5+6;
    /*
    std::cout << 56 / 10 << std::endl; //5
    std::cout << 5 % 10 << std::endl; //5    
    */


int sumOddDigits(const std::string cardNum){
    int sum = 0;
    for(int i = cardNum.size()-1; i>=0;i-=2){
        sum +=(cardNum[i] - '0'); /// no need to double the odd digits
    }
    return sum;
}


int sumEvenDigits(const std::string cardNum){
    int sum = 0;
    for(int i = cardNum.size()-2; i >= 0; i-=2){
        //finds cardNum strings size , cardNum.size()
        //cardNum.size() - 2 , to reverse from the last 2nd as rules
        sum += getDigit((cardNum[i] - '0')*2);
        //cardNum[i] which means a char
        //getDigit(const int number)
        //(cardNump[i] - '0') , here minus '0' char zero will be like each number cahr will be in the decimal value and - zero's value will give the actual number of that char
    }
    return sum;
}

/*
Ascii value for char
decimal value       character 
48                  0
49                  1
50                  2
51                  3
52                  4
53                  5
54                  6
55                  7
56                  8
57                  9                      
*/
