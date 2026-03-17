#include<iostream>
#include<ctime>
#include<cstdlib>

int main(){

    /* 
    todo: simple number guessing game
    int givenNum;
    srand(time(0));
    /guessing Number between 1-5;
    int guessingNum = (rand() % 5) + 1;
    std::cout<< "Enter a number between 1 to 5 : ";
    std::cin >> givenNum;
    if(givenNum == guessingNum){
        std::cout<< "Matched\n";
        std::cout<< "Given Number: " << givenNum << '\n'
                 << "Guessing Number: "<< guessingNum << '\n';
    }else{
        std::cout<< "not matched\n";
        std::cout<< "Given Number: " << givenNum << '\n'
                 << "Guessing Number: "<< guessingNum << '\n';
    }
    */

    //todo: making a console number guessing game
    int num_from_user, guess, tries = 0;
    srand(time(NULL));
    //number guessing between 1-5
    guess = (rand() % 5) + 1;
    std::cout << "=============================================\n";
    std::cout << "#    WELCOME TO THE NUMBER GUESSING GAME    #\n";
    std::cout << "=============================================\n";
    std::cout << "RULES: Guess the magic number between 1 and 5!\n";
    std::cout << "\n\n";
    do{ 
        std::cout<<"Enter your number: ";
        std::cin >> num_from_user;
        //to count tries
        tries++;

    }while(guess != num_from_user);//if they ar not same then it will run again;
    std::cout<< std::endl;
    std::cout<<"CONGRATULATIONS, BRUH!\n"
            << "Your guess MATCHED the magic number!\n" 
            <<'\n'
            << "STATS:\n"
            << "- Attempts Taken: " <<tries << '\n'
            << "- Last Guess:  "<<num_from_user<< '\n'
            << "- Program's Guess: "<< guess<< '\n' <<'\n'
            << "GAME OVER. Thanks for playing! " <<'\n' 
            << "Try again to beat your score!" <<'\n'
            << "=============================================\n";
            
    return 0;
}
