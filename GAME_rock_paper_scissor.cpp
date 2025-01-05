#include<iostream>
#include<ctime>
#include<cstdlib>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void choseWinner(char player, char computer);

int main(){
    char player, computer;
    char play;
    playAgain:
        player = getUserChoice();
        computer = getComputerChoice();
        choseWinner(player, computer);
        question:
        std::cout << "play again?(y/n): ";
        std::cin >> play;

    if(play == 'y' ){
        goto playAgain;
    }else if(play != 'y' && play != 'n'){
        std::cout << "Invalid Input\n";
        goto question;
    }else if(play == 'n'){
        return 0;
    }
}

char getUserChoice(){
    char player;

    std::cout << "************************\n";
    std::cout << "***rock_paper_scissor***\n";
    std::cout << "************************\n";
    
    playAgain:
        std::cout << "What's your choice?\n"
                << "r = rock\n"
                << "p = paper\n"
                << "s = scissor\n";
        std::cout << "Your choice ?(r/p/s): ";
        std::cin >> player;
        
        //input error solved
        std::cin.clear();
        fflush(stdin);

        std::cout << "************************\n";
    if(player == 'r' || player == 'p' || player == 's'){
        return player; 
    }else{
        std::cout << "Invalid Input\n";
        goto playAgain;
    }
    //std::cout << player << '\n';    //to test
}

char getComputerChoice(){
    srand(time(NULL));
    int ch = (rand() % 3) + 1; // 1/2/3 choice in ch as number;
    switch (ch){
    case 1:
        return 'r';
        break;
    case 2:
        return 'p';
        break;
    case 3:
        return 's';
        break;
    default:
        std::cout << "Error while finding the random choice\n";
        return '\0';
        break;
    }
}




void choseWinner(char player, char computer){

    /*
    The rules for Rock, Paper, Scissors are simple:

    Rock beats Scissors: Rock crushes Scissors.
    Scissors beats Paper: Scissors cut Paper.
    Paper beats Rock: Paper wraps Rock.
    If both players choose the same option, it's a tie.
    */
    if(player == computer){
        std::cout << "it's a tie.\n";
        /*
        std::cout << "player choice: ";
        showChoice(player);
        std::cout << "computer choice: ";
        showChoice(computer);
    }
    else{
        std::cout << "Computer Win\n";
        std::cout << "player choice: ";
        showChoice(player);
        std::cout << "computer choice: ";
        showChoice(computer);
        */
    }
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        std::cout << "rock\n" ;
        break;
    case 'p':
        std::cout << "paper\n" ;
        break;
    case 's':
        std::cout << "scissor\n" ;
        break;
    default:
        std::cout << "Error while finding the random choice\n";
        break;
    }
}